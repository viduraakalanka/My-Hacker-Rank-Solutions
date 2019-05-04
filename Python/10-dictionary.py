if __name__ == '__main__':
    
    n = int(raw_input())
    student_marks = {}
    
    for _ in range(n):
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        student_marks[name] = scores


    query_name = raw_input()
    total = 0
    query_scores = student_marks[query_name]

    for  i in xrange(0,3):
        total += query_scores[i]


    print("%.2f"%(total/float(3)))

#######################ALTERNATIVE ANSWER################################

#d={}
#for i in range(int(raw_input())):
#	line=raw_input().split()
#	d[line[0]]=sum(map(float,line[1:]))/3
#
#print '%.2f' % d[raw_input()]

#########################################################################
