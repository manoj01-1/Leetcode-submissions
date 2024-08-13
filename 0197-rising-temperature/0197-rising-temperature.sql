# Write your MySQL query statement below
select w2.Id
from
Weather w1 join Weather w2 ON DATEDIFF(w1.recordDate,w2.recordDate)=-1 
and w2.temperature>w1.temperature;