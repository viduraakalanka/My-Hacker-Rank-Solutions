SELECT CASE WHEN Grades.Grade <8 
            THEN NULL ELSE Students.Name END,
Grades.Grade, Students.Marks
FROM Students
LEFT JOIN Grades
ON Students.Marks BETWEEN Grades.Min_Mark AND Grades.Max_Mark
ORDER BY Grades.Grade DESC,
CASE WHEN Grades.Grade >= 8 THEN Students.Name
ELSE Students.Marks END ASC;
