# Write your MySQL query statement below

with cte as
(select *,sum(weight)over(order by turn rows between unbounded preceding and current row)as total
from Queue )



select person_name
from cte 
where total <=1000
order by turn desc limit 1;