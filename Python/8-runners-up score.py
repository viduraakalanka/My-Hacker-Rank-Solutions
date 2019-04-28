if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    arr.sort(reverse=True)
    length  = len(arr)
    
    for i in range(1,length):
        if arr[i]<arr[i-1]:
            print (arr[i])
            break

