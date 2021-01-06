#!/usr/bin/env python
import numpy as np

def input_generator():
    n = np.random.randint(2, 50) # rand between 2 and 50
    return str(n) + " " + " ".join(np.random.sample((n,)).astype(str))

if __name__ =='__main__':
    print(input_generator())
