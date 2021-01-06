#!/usr/bin/env python
import numpy as np

import string
import random

def gen_6number():
	return ''.join(np.array([np.random.randint(0,9) for _ in range(6)]).astype(str))

num_students = np.random.randint(100, 150)
num_classes  = np.random.randint(20, 25)

class_list   = sorted(np.array([gen_6number() for _ in range(num_classes)]))
student_list = sorted(np.array([gen_6number() for _ in range(num_students)]))

def gen_class():
	return random.SystemRandom().choice(class_code)

def gen_score(class_code):
	score = np.random.normal(75, 15)
	score = max(0, score)
	score = min(100, score)
	return str(int(score))

def gen_one_line(student_id, class_code):
	return student_id + ' ' + class_code + ' ' + gen_score(class_code)

def input_generator():
	ret_str = []
	ret_str.append(str(len(student_list)))
	ret_str.append(str(len(class_list)))
	ret_str.append(' '.join(class_list))
	scores = []
	for s in student_list:
		for c in class_list:
			ret_str.append(gen_one_line(s, c))

	return '\n'.join(ret_str)


if __name__ =='__main__':
	print(input_generator())

