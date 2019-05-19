if __name__ == '__main__':
    n = int(raw_input())
    integer_list = map(int, raw_input().split())
    integer_tuple = tuple(integer_list)
    output = hash(integer_tuple)
    #An object is hashable if it has a hash value which never changes during its lifetime (it needs a __hash__() method), and can be compared to other objects (it needs an __eq__() or __cmp__() method). Hashable objects which compare equal must have the same hash value.
    #All of Python’s immutable built-in objects are hashable, while no mutable containers (such as lists or dictionaries) are. 
    
    print(output)
