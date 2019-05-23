read var

if [[ "$var" == "y" ]]  
then
    echo "YES"
elif  [[ "$var" == "Y" ]]
then
    echo "YES"
elif [[ "$var" == "n" ]] 
then
    echo "NO"
elif  [[ "$var" == "N" ]] 
then
     echo "NO"
fi
