def hanoi_f(one, three, n):
    if n == 1:
        print(one,three)
        return
    # 전체의 기둥에서 처음과 끝을 뺀 중간 기둥의 값을 구함.
    hanoi_f(one, 6-one-three, n-1) #1단계 (1->2)
    print(one, three) #2단계 (마지막원반 1->3)
    hanoi_f(6-one-three, three, n-1) #3단계 (2->3)

#메인
n = int(input())
print(2**n-1)
if n <= 20:
    hanoi_f(1,3,n)