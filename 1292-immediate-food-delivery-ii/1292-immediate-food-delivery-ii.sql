# Write your MySQL query statement below

with cte as
(select *,
rank() over(partition by customer_id order by order_date )as rnk,
(case when order_date=customer_pref_delivery_date then 1 else 0 end) as type
from Delivery)



select round(sum(case when type=1 then 1 else 0 end)/count(*)*100,2) as immediate_percentage
from cte where rnk=1;
