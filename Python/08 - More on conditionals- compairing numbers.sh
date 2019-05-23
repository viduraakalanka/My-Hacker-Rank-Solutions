read len1
read len2
read len3

if [[ $len1 -eq $len2 ]] && [[ $len1 -eq $len3 ]]
then
    echo "EQUILATERAL"
elif [[ $len1 -eq $len2 ]] || [[ $len2 -eq $len3 ]] || [[ $len1 -eq $len3 ]]
then 
    echo "ISOSCELES"
else
    echo "SCALENE"
fi

