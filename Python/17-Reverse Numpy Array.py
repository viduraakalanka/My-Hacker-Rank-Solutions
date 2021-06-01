import numpy

def arrays(arr):
    arr_len = len(arr)
    numpy_arr = numpy.array(arr, float)
    
    reversed_arr = numpy_arr[::-1]
    return reversed_arr

arr = raw_input().strip().split(' ')
result = arrays(arr)
print(result)