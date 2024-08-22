
 
WITH cte AS (
  SELECT requester_id AS id, accepter_id
  FROM RequestAccepted
  UNION all
  SELECT accepter_id AS id, requester_id
  FROM RequestAccepted
)
SELECT id, COUNT( accepter_id) AS num
FROM cte
GROUP BY id
ORDER BY num DESC
LIMIT 1;