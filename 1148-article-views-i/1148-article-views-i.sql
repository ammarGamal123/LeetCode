/* Write your T-SQL query statement below */
select distinct author_id as id
from Views
where viewer_id = author_id
order by id