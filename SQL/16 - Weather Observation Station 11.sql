SELECT DISTINCT CITY
FROM STATION
WHERE NOT (SUBSTRING(CITY,LENGTH(CITY),1) IN ('a','e','i','o','u') AND
SUBSTRING(CITY,1,1) IN ('a','e','i','o','u'));
