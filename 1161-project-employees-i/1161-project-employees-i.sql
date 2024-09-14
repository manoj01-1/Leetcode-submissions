select p.project_id,round(sum(e.experience_years)/count(e.name),2) as average_years
from Project p join Employee e on p.employee_id=e.employee_id
group by p.project_id