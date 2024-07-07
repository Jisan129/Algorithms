array = [5,4,-1,7,8]
sum = 0
max_sum = -1000000
for i in range(0, len(array)):
    temp = sum + array[i]
    if temp > array[i]:
        sum = temp
    else:
        sum = array[i]
    max_sum = max(max_sum, sum)
print(max_sum)
