#!/usr/bin/env python
import numpy as np

def input_generator():
	n = np.random.randint(-5,10)
	return str(n)

if __name__ =='__main__':
    print(input_generator())
