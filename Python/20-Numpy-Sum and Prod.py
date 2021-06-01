import numpy

[N,M] = map(int, raw_input().strip().split())
list_2D = []

for i in range(N):
    list_2D.append(map(int, raw_input().strip().split()))
    
array_numpy = numpy.array(list_2D)
    
sum_axis_0 = numpy.sum(array_numpy, axis=0)
prod = numpy.prod(sum_axis_0)

print prod


