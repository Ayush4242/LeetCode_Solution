# Write your MySQL query statement below
select player_id,MIN(event_date) AS first_login
from Activity 
Group By player_id
order by event_date;


