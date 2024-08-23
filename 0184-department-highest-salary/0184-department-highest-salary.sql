# Write your MySQL query statement below
with cte as
(select *, rank() over(partition by departmentId order by salary desc)as rnk
from Employee)


select d.name as Department,
c.name as Employee,
c.salary as Salary
from cte c
join Department d on c.departmentId=d.id 
where rnk=1;