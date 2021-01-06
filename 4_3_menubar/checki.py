#!/usr/bin/env python
import numpy as np

import string
import random

def input_generator():
    size = np.random.randint(1, 10)
    n = np.random.choice(['F', 'E', 'V', 'H'], size=size)
    return " ".join(n.astype(str)) + " q"


if __name__ =='__main__':
    print(input_generator())
