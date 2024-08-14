# Write your MySQL query statement below

with cte as
(select * 
from Students cross join Subjects),
cte2 as(
select student_id,subject_name,Count(subject_name) as c
from Examinations 
group by student_id,subject_name
)
# 1 math 3
# 1 physics 2....


select cte.student_id,cte.student_name,cte.subject_name,
case when c is not null then c else 0 end as attended_exams
from cte left join cte2 on cte.student_id=cte2.student_id 
and cte.subject_name=cte2.subject_name
order by cte.student_id,cte.subject_name;
