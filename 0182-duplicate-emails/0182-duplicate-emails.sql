# Write your MySQL query statement below
select email from Person Group by email  Having COUNT(email)>1;