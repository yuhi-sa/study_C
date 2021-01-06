#!/usr/bin/env python
import numpy as np

import string
import random

def input_generator():
    return ""


def arg_generator():
    n = np.random.randint(1, 5)
    return " ".join( ('-' + random.SystemRandom().choice(['help', 'version', 'test', 'search', 'kick', 'punch', 'jump']) for _ in range(n) ))


if __name__ =='__main__':
    print(input_generator())
