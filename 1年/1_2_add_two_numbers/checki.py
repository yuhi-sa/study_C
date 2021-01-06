#!/usr/bin/env python
import numpy as np

def input_generator():
    return " ".join(np.random.randint(-100,100, 2).astype(str))

if __name__ =='__main__':
    print(input_generator())
