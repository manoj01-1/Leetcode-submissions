SELECT e.employee_id
FROM Employees e
WHERE e.salary < 30000
AND e.manager_id NOT IN (
    SELECT e2.employee_id
    FROM Employees e2
)
ORDER BY e.employee_id;