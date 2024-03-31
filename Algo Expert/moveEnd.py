list = [4, 2, 4, 0, 0, 3, 0, 5, 1, 0]

left, right = 0, 1
target = 0
while right < len(list) and left < len(list):
    if list[right] != target and list[left] == target:
        list[right], list[left] = list[left], list[right]
        left += 1
        right += 1
    elif list[left] != target:
        left += 1
        right += 1

    elif list[right] == target:
        right += 1

print(list)
