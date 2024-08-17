-- # Write your MySQL query statement below

-- with cte as
-- (select *,lead(num,1)over(order by id) as next_1, lead(num,2)over(order by id) as next2
-- from Logs)

-- select distinct num as ConsecutiveNums
-- from cte where num=next_1 and num=next2;

SELECT DISTINCT l1.num AS ConsecutiveNums
FROM Logs l1
JOIN Logs l2 ON l1.id = l2.id - 1 AND l1.num = l2.num
JOIN Logs l3 ON l2.id = l3.id - 1 AND l2.num = l3.num;
