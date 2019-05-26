read num
total=0

for ((i=0;i<$num;i++))
do
    read temp1
    #alternative answer
    #let "total += $temp1" 
    total=$(( $total + $temp1 ))
done

printf "%0.3f" $(echo "$total/$num" | bc -l)
