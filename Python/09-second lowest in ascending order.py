student_list = []
second_lowest_list  = []
second_lowest_found = False

for _ in range(int(raw_input())):
    name = raw_input()
    score = float(raw_input())
    student_list.append([name,score])



def takeSecond(element):
    return element[1]

def takeFirst(element):
    return element[0]

student_list.sort(key=takeSecond)
print(student_list)
length = len(student_list)

for i in range(1,length):
    #below if condition finds the second lowest value
    if student_list[i][1]>student_list[i-1][1] and second_lowest_found == False:
        second_lowest_list.append(student_list[i])
        second_lowest_found = True
    #below  elif condition appends other second lowest  values in the  student_list
    elif student_list[i][1]==student_list[i-1][1] and second_lowest_found == True:
         second_lowest_list.append(student_list[i])
    #as soon as all the second lowest values are found last elif condition breaks out of the  loop
    elif second_lowest_found==True:
        break


second_lowest_list.sort(key=takeFirst)
print(second_lowest_list)

for i in range(len(second_lowest_list)):
    print(second_lowest_list[i][0])

##################################################################
######################ALTERNATIVE ANSWER##############################

#Logic : First find the scond lowest value and then search for  names  with that value

##n = int(raw_input())
##lst = []
##for x in range(0, n):
##    lst.append([raw_input(), float(raw_input())])
##lst = sorted(lst, key=lambda x: x[1]);
##for x in range(1, n):
##    if(lst[x][1] != lst[x-1][1]):
##        score = lst[x][1]
##        break
##lst = sorted(lst);
##for x in range(n):
##    if(lst[x][1] == score):
##        print lst[x][0]

##################################################################
##########################ANOTHER ALTERNATIVE#########################

#a = [[raw_input(), float(raw_input())] for i in xrange(int(raw_input()))]
#s = sorted(set([x[1] for x in a]))
#for name in sorted(x[0] for x in a if x[1] == s[1]):
#    print name

##################################################################
