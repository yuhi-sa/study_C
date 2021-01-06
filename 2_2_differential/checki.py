#!/usr/bin/env python
import numpy as np

def input_generator():
	"""
	:rtype: str
	:return: an integer in [-1,0,1,...,10], followed by n+1 random numbers in (-10,10]
	"""	
	n = np.random.choice([-1, 0, 1])
	if n == 1:
		n = np.random.randint(0, 11) # rand between 1 and 10
	return str(n) + " " + " ".join(np.random.sample((n+1,)).astype(str))

if __name__ =='__main__':
    print(input_generator())
