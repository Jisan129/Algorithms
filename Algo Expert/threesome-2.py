arr = [-1,0,1,2,-1,-4]
target = 0
list=[]
arr = sorted(arr)
for i in range(len(arr) - 1):
    cur = arr[i]
    right = len(arr) - 1
    left = i + 1
    while right > left:
        leftCount = arr[left]
        rightCount = arr[right]
        result = leftCount + rightCount + cur

        if result == target:
            temp=[arr[i],arr[left],arr[right]]
            list.append(temp)
            print(temp)
            left += 1
        elif result < target:
            left += 1
        elif result > target:
            right -= 1
