def is_leap(year):
    leap = False
    
    # Write your logic here
    if year%100== 0 :
        if year%400==0:
            return True
        else:
            return False
        
    elif year%4==0:
        return True
    else:
        return False

    return leap

year = int(raw_input())
print is_leap(year)
