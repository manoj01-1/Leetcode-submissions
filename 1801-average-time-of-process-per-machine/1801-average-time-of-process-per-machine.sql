# Write your MySQL query statement below
select t1.machine_id machine_id,round(avg(diff),3) as processing_time
from
( select a1.machine_id, abs(a1.timestamp-a2.timestamp) as diff
from Activity a1 left join 
Activity a2 on a1.machine_id=a2.machine_id AND a1.process_id=a2.process_id and a1.activity_type='start' and a2.activity_type='end')t1 group by t1.machine_id;