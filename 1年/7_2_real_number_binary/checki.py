#!/usr/bin/env python
import numpy as np

def input_generator():
    return str(np.random.sample() * 200 - 100)


if __name__ =='__main__':
    print(input_generator())
