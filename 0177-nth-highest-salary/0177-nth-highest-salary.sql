CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
        with cte as
       ( select *,
        dense_rank() over(order by salary desc) as rnk from Employee) 

        select distinct ifnull(salary,NULL)
        from cte where rnk=N
  );
END