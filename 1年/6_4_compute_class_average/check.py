#!/usr/bin/env python

# from subprocess import Popen, PIPE, TimeoutExpired # python3
from subprocess import Popen, PIPE # python2
from sys import argv, exit
import numpy as np

from checki import input_generator

is_arg = True
try:
    from checki import arg_generator
except ImportError:
    is_arg = False
    pass


# this should be modified for each assignment
def check_output(output_correct, output):

    outlist_correct = np.array([i.split() for i in output_correct.split("\n")]) # 'in 11\nout 13' --> [['in','11'],['out','13']]
    outlist         = np.array([i.split() for i in output.split("\n")])         # 'in 11\nout 13' --> [['in','11'],['out','13']]

    if len(outlist_correct) != len(outlist):
        print("ERROR: number of lines are different.")
        return False

    for i in range(len(outlist_correct)):
        if " ".join(outlist_correct[i]) != " ".join(outlist[i]): # if outlist_correct[i] != outlist[i]:
            print("ERROR in line {0} of your output".format(i))
            print("correct output: {0}".format(outlist_correct[i]))
            print("   your output: {0}".format(outlist[i]))
            return False
            
    return True



def executing_code(command_to_execute,stdin_input):
    try:
        p = Popen(command_to_execute, stdin=PIPE, universal_newlines=True, shell=True, stdout=PIPE, stderr=PIPE)
        # stdout, stderr = p.communicate(input=stdin_input,timeout=1) # python3
        stdout, stderr = p.communicate(input=stdin_input) # python2
    except TimeoutExpired:
        p.kill()
        stdout, stderr = p.communicate()
        print("ERROR: your code didn't finish in 2 seconds")
        raise
    except:
        p.kill()
        stdout, stderr = p.communicate()
        print("ERROR: your code is something wrong.")
        raise
    finally:
        return p.returncode, stdout, stderr



def check_command(command_correct, command):

    ntests = 10
    ntests_passed = 0
    print("### testing \"%s\"" % command)

    for i in range(ntests):

        try:
            stdin = input_generator()

            options = ''
            if is_arg:
                options = ' ' + arg_generator()

            returncode, stdout, stderr = executing_code(command + options, stdin)

            if len(stderr) > 0 or returncode != 0:
                print("ERROR: your code has an error.")
                raise

            returncode_correct, stdout_correct, stderr_correct = executing_code(command_correct + options, stdin)

            if len(stderr) > 0 or returncode_correct != 0:
                print("ERROR: test code has an error.")
                raise

            if check_output(stdout_correct, stdout):
                ntests_passed += 1
            else:
                print("ERROR: your answer is not correct.")
                raise
            
        except:
            if len(options) > 0:
                print("commandline \"%s\"" % (command + options) )

            if len(stdin) > 0:
                print("input \"%s\"" % stdin)

            if len(stdout_correct) > 0:
                print("correct output:")
                print("===============")
                print(stdout_correct[:10000])
                print("===============")

            if len(stdout) > 0:
                print("your output:")
                print("===============")
                print(stdout[:10000])
                print("===============")

            if len(stderr) > 0:
                print("error message:")
                print("===============")
                print(stderr)
                print("===============")

            if returncode != 0:
                print("returncode: {0}".format(returncode))

            break

    print("### {0} of {1} tests passed".format(ntests_passed, ntests))
    if ntests_passed == ntests:
        return "OK"
    else:
        return "Fail"



def main():
    if len(argv) < 3:
        exit("No arguments are given. Usage: python3 check.py ./a.out_correct ./a.out [./a.out ./a.out ...]")
    results = []
    cmd_correct = argv[1]
    for cmd in argv[2:]:
        results.append([cmd, check_command(cmd_correct, cmd)])
    for r in results:
        print('Result: {0} for {1}'.format(r[1], r[0]))


if __name__ =='__main__':
    main()

