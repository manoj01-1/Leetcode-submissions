# Write your MySQL query statement below

(
select u.name as results
from MovieRating m join Users u on u.user_id=m.user_id
group by u.user_id
order by count(*) desc,u.name
limit 1)
union all
(
    select m.title as results
    from MovieRating r join
    Movies m on r.movie_id=m.movie_id
    where date_format(r.created_at,'%Y-%m')='2020-02'
    group by m.title
    order by avg(r.rating) desc ,m.title
    limit 1

)