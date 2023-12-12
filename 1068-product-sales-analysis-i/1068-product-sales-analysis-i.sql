/* Write your T-SQL query statement below */
select product_name , year , price
from Sales inner join Product on Product.product_id = Sales.product_id;