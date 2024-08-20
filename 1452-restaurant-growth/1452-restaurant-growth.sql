
with cte as
( select visited_on,sum(amount)as amount
    from customer group by visited_on),

cte2 as(
    select visited_on,
    sum(amount) over(order by visited_on rows between 6 preceding and current row) as amount,

    round(avg(amount) over(order by visited_on rows between 6 preceding and current row),2) as average_amount,
    count(*) over(order by visited_on rows between 6 preceding  and current row) as counts 
    from cte 
)


select visited_on,
amount,
average_amount
from cte2 
where counts=7
order by visited_on 