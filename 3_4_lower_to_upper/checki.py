#!/usr/bin/env python
import numpy as np

import string
import random

def input_generator():
    n = np.random.randint(2, 50) # rand between 2 and 50
    return ''.join(random.SystemRandom().choice((" "*10) + "+-*/&()<>" + string.ascii_letters + string.digits) for _ in range(n)) + '\n'


if __name__ =='__main__':
    print(input_generator())
