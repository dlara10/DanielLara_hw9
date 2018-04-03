import numpy as num
import matplotlib.pyplot as plt
import time

N = 35
t = []
n = []
i = 0
def fibonacci(N):
	if(N == 0 or N ==1):
		return N
	else:
		return fibonacci(N-2) + fibonacci(N-1)

def get_time(N):
	t0 = time.time()
	fibonacci(N)
	t1 = time.time()-t0
	return t1
for i in range(N):
	print i, get_time(i)
	



	
