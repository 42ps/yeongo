### 문제 소개
[일곱_난쟁이](link_to_problem)

### 입/출력 분석
- 모든 입/출력 경우의 수를 나열하시오.

### 풀이
- 풀이 과정 (풀이의 논리가 담긴 글)
완전 탐색을 통해 전체 키 합의 초과분인 overHeight와 일치하는 키 합의 두 불청객 난쟁이를 선택.
예외 사항으로, 가능한 불청객 난쟁이 조합이 둘 이상인 경우, 최초 발견된 케이스로 진행하기 위해 플래그 설정.

- 풀이의 중심이 되는 알고리즘이 무엇인가?
완전 탐색

- 왜 이 알고리즘을 선택했는가?
입력의 수가 9개로 지정되어 있어 O(n^2)의 시간복잡도를 고려할 필요가 없음.

- 시간복잡도를 계산하시오.
O(n^2)

- 공간복잡도를 계산하시오.
O(n)

- special case가 있는가?

### 슈도 코드 작성

### 소스 코드 작성
제출 파일.

### 테스트 작성
