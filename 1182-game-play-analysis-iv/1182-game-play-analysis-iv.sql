WITH cte AS (
    SELECT player_id, MIN(event_date) AS first_date
    FROM Activity
    GROUP BY player_id
),
cte2 AS (
    SELECT player_id, DATE_ADD(first_date, INTERVAL 1 DAY) AS second_date
    FROM cte
)
SELECT 
    ROUND(
        (
            SELECT COUNT(DISTINCT player_id)
            FROM Activity
            WHERE (player_id, event_date) IN (
                SELECT player_id, second_date
                FROM cte2
            )
        ) / 
        (SELECT COUNT(DISTINCT player_id) FROM Activity),
        2
    ) AS fraction;
