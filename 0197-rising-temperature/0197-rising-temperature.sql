# Write your MySQL query statement below
select w.id from weather w join weather y  on
DATEDIFF(w.recordDate,y.recordDate)=1
where w.temperature>y.temperature