/* Write your T-SQL query statement below */

select unique_id , name
from Employees e
left join EmployeeUNI u
on u.id = e.id;