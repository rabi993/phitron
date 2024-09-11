
import math
import time

def timer(fun):
    def inner(*args, **kwargs):
        print('time started')
        start = time.time()
        # print(fun)
        fun(*args, **kwargs)
        print('time ended')
        end = time.time()
        print(f'total time taken {end - start}')
    return inner

@timer
def get_factorial(n):
    print('factorial starting')
    result = math.factorial(n)
    print(f'factorial of {n} is: {result}')


get_factorial(n=50)
# timer(get_factorial)()
# get_factorial()

# timer()()