-- 코드를 입력하세요
# 공간을 둘 이상 등록
# 공간의 정보를 아이디 순서

SELECT *
from PLACES
where HOST_ID in (
select HOST_ID
from PLACES
group by HOST_ID
having count(*)>1
)
order by ID