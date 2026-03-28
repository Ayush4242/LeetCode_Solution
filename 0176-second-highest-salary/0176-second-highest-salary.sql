# Write your MySQL query statement below
Select Max(salary) AS SecondHighestSalary
from Employee
where salary<(Select Max(salary) AS SecondHighestSalary
from Employee)
