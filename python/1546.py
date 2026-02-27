num = int(input())
temp = 0

arr = list(map(int, input().split(" ")))

max_num = int(max(arr))

for i in range(0, len(arr)) :
    arr[i] = (int(arr[i]) / max_num * 100)
    temp += arr[i]

print(temp / num)