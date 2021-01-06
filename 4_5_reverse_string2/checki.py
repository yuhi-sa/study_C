#!/usr/bin/env python
import numpy as np

import string
import random

def input_generator():
    n = np.random.randint(2, 40) # rand between 2 and 50
    ret = ''.join(random.SystemRandom().choice(string.ascii_letters) for _ in range(n))
    ret2 = np.random.choice(['', random.SystemRandom().choice(string.ascii_letters)])
    ret = ret + ret2 + ret[::-1]
    if np.random.choice([True,False]):
    	ret = list(ret)
    	ret[np.random.randint(0, len(ret))] = random.SystemRandom().choice(string.ascii_letters)
    	ret = ''.join(ret)
    return ret


if __name__ =='__main__':
    print(input_generator())
