#!/usr/bin/env python
import numpy as np

import string
import random

def input_generator():
    size = np.random.randint(1, 10)
    n = np.random.randint(1, 15, size=size)
    return " ".join(n.astype(str))


if __name__ =='__main__':
    print(input_generator())
