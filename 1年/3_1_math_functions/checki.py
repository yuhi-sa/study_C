#!/usr/bin/env python
import numpy as np

def input_generator():
	n = 10 * np.random.rand() - 5
	return str(n)

if __name__ =='__main__':
    print(input_generator())
