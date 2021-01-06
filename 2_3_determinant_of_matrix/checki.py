#!/usr/bin/env python
import numpy as np

def input_generator():
	n = np.random.choice([2, 3, 4])
	if n == 2:
		a = np.random.rand(2,2)
	elif n == 3:
		a = np.random.rand(3,3)
	else:
		return str(n)
	return str(n) + " " + " ".join(a.ravel().astype(str)) + " " + str(np.linalg.det(a))
    

if __name__ =='__main__':
    print(input_generator())
