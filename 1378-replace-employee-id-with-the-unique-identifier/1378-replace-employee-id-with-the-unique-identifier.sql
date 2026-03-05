# Write your MySQL query statement below
SELECT b.unique_id, a.name FROM Employees a
LEFT OUTER JOIN EmployeeUNI b
ON a.id = b.id;