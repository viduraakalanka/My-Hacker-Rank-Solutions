SELECT  total_comp, count(total_comp)
FROM (    
    SELECT salary*months AS total_comp
    FROM Employee
) AS Intermediate_Table
GROUP BY total_comp DESC
LIMIT 1;
