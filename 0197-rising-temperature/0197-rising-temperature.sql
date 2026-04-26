# Write your MySQL query statement below

Select w.id from Weather w join weather y 
on DATEDIFF(w.recordDate,y.recordDate)=1  where w.temperature>y.temperature