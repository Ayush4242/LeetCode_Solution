# Write your MySQL query statement below
select t1.id from Weather t1 join Weather t2 on t1.recordDate=DATE_ADD(t2.recordDate,Interval 1 DAY)  where t1.temperature>t2.temperature;