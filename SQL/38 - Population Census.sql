SELECT SUM(CITY.POPULATION)
FROM CITY
JOIN COUNTRY ON COUNTRY.Code = CITY.CountryCode
WHERE COUNTRY.CONTINENT = 'Asia';
