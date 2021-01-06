#!/usr/bin/env python
import numpy as np

def input_generator():
	n = 0.001 * np.random.rand(8) - 0.0005
	return " ".join(n.astype(str))

if __name__ =='__main__':
    print(input_generator())
