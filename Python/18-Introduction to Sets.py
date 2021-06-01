from __future__ import division

def average(array):
    distinct_set = set(array)
    len_set = len(distinct_set)
    sum_all=0
    
    for num in distinct_set:
        sum_all += num
        
    average = round(sum_all/len_set,3)
    return average

if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    result = average(arr)
    print result