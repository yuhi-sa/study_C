#!/usr/bin/env python
import numpy as np

import string
import random

import calendar
def input_generator():
    year = list(calendar.month_name)
    year.append("end")
    size = np.random.randint(1, 10)
    n = np.random.choice(year, size=size)
    return " ".join(n.astype(str))


if __name__ =='__main__':
    print(input_generator())
