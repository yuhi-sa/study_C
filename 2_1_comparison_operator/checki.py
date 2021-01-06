#!/usr/bin/env python
import numpy as np

def input_generator():
    n = 200 * np.random.rand(3) - 100 # rand between -100 and 100
    return " ".join(n.astype(str))

if __name__ =='__main__':
    print(input_generator())
