# Write your MySQL query statement below

select employee_id,
   case when count(department_id)=1 then department_id
    when count(department_id)>1 then sum((primary_flag='Y')*department_id)

end   
as department_id
from Employee 
group by employee_id
having department_id>0;


