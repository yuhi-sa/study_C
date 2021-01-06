#!/usr/bin/env python
import numpy as np

import string
import random

def input_generator():
    return ""


def arg_generator():
    a = np.random.randint(1, 10)
    b = np.random.randint(8, 20)
    n = np.random.randint(-2, 200)
    funcs = random.SystemRandom().choice(['linear', 'quad', 'sin', 'cos', 'log', 'exp'])
    return " ".join([funcs, str(a), str(b), str(n)])


if __name__ =='__main__':
    print(arg_generator())
