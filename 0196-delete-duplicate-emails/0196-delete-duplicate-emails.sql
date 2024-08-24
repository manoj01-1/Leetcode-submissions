
with cte as (
    SELECT email,min(id) as id_to_keep
    FROM Person 
    group by email
)

    delete from Person 
    where id not in(select id_to_keep from cte)
    

