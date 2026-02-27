num = int(input())
arr = str(input()).split(" ")
number = int(input())
k = 0

for i in range(0, num) : 
    if (int(arr[i]) == number):
        k+=1

print(k)