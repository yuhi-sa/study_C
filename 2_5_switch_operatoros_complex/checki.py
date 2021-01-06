#!/usr/bin/env python
import numpy as np

def input_generator():
	"""
	:rtype: str
	:return: a character from ops, followed by four random numbers in (0,1]
	"""
	ops = ['+', '-', '*', '/']
	return np.random.choice(ops) + " " + " ".join(np.random.sample((4,)).astype(str))

if __name__ =='__main__':
    print(input_generator())
