def count_substring(string, sub_string):
    len_str = len(string)
    len_sub_str = len(sub_string)
    count = 0
    for i in range(0,len_str-(len_sub_str-1)):
        if (sub_string == string[i:i+len_sub_str]):
            count += 1

    return count


if __name__ == '__main__':
    string = raw_input().strip()
    sub_string = raw_input().strip()
    
    count = count_substring(string, sub_string)
    print count