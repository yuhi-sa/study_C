#!/usr/bin/env python
import numpy as np

def input_generator():
    return str(np.random.randint(0,2147483647))

if __name__ =='__main__':
    print(input_generator())
