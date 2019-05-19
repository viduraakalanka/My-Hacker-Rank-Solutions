def swap_case(s):
    #s  = s.split("")
    s_list = []
    #print (s)
    for i in range(len(s)):
        if s[i].isupper():
            s_list.append(s[i].lower())
        else:
            s_list.append(s[i].upper())
    
    return (''.join(s_list))
    
if __name__ == '__main__':
    s = raw_input()
    result = swap_case(s)
    print result