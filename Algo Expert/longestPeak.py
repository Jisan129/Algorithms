arr = [2,1,4,7,3,2,5]
peak_arr = []
for i in range(1, (len(arr) - 1)):
    temp = i
    if arr[i - 1] < arr[i] and arr[i] > arr[i + 1]:
        peak_arr.append(i)

result = 0
for i in range(0, len(peak_arr)):
    temp = 1
    res = arr[peak_arr[i]]
    for j in range(peak_arr[i]+1, len(arr)):
        if res > arr[j]:
            res=arr[j]
            temp += 1
        else:
            break
    res=arr[peak_arr[i]]
    for j in range(peak_arr[i]-1, -1, -1):
        if res > arr[j]:
            res=arr[j]
            temp += 1
        else:
            break
    result = max(result, temp)
print(result)
