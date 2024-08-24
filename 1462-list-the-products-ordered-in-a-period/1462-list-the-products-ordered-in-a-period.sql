# Write your MySQL query statement below

with cte as(
select product_id,sum(unit) as unit
from Orders 
where year(order_date)=2020
and month(order_date)=02
group by product_id )



select p.product_name,c.unit
from cte c
join Products p
on p.product_id=c.product_id
where unit>=100
;