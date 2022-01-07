from sys import stdin

#값 입력
N,W = map(int,stdin.readline().split(" "))
item = [list(map(int,stdin.readline().split())) for i in range(N)]

matrix = [[0 for i in range(W+1)] for i in range(N)] # 행렬 초기화

for i in range(N): # 행, 물건의 갯수
    value = item[i][1]
    weight = item[i][0]
    for capacity in range(W+1): # 열, 가방의 임시용량 0부터 W까지
        if i == 0: # 첫번째 행은 비교대상 없음
            if weight <= capacity:
                matrix[i][capacity]= value
        else:
            old_value = matrix[i-1][capacity]
            if weight <= capacity:
                rest_value = matrix[i-1][capacity-weight] # i번 물건을 담는 경우 나머지 용량에 담을수 있는 최적가치
                matrix[i][capacity] = max(old_value, value + rest_value)# (기존값,가능한 합) 중 큰것
            else:
                matrix[i][capacity] = old_value # 기존 값 유지
        
print(matrix[N-1][W])