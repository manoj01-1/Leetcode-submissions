# Write your MySQL query statement below

select request_at as Day,
round(sum(case when status like "cancelled%" then 1 else 0 end)/count(*),2) as "Cancellation Rate"
from Trips t 
left join Users u on t.client_id=u.users_id
left join Users u2 on t.driver_id=u2.users_id  
where u.banned="No" and u2.banned="No" and 
request_at between "2013-10-01" and "2013-10-03" 
group by request_at 
order by request_at


