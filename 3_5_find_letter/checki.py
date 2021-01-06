#!/usr/bin/env python
import numpy as np

import string
import random

def input_generator():
    n = np.random.randint(2, 50) # rand between 2 and 50
    mystring = ''.join(random.SystemRandom().choice("*/&()<>" + string.ascii_letters + string.digits) for _ in range(n))
    return random.choice(mystring + "+-") + " " + mystring


if __name__ =='__main__':
    print(input_generator())
