#!/usr/bin/env python
import numpy as np

import string
import random

def gen_letter():
	return random.SystemRandom().choice(string.ascii_letters)

def gen_word():
	n = np.random.randint(2,10)
	return ''.join(gen_letter() for _ in range(n))

def gen_words():
	n = np.random.randint(2,10)
	return ' '.join(gen_word() for _ in range(n))

def gen_lines():
	n = np.random.randint(2,10)
	return '\n'.join(gen_words() for _ in range(n)) + '\n'


def input_generator():
    return gen_lines()


def arg_generator():
    return gen_letter()


if __name__ =='__main__':
    print(input_generator())
