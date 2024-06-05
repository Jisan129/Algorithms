# class Solution:
#     def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
#         array=matrix
#         startingRow, startingColumn = 0, 0
#         endingRow, endingColumn = len(array) - 1, len(array[0]) - 1

#         result = []

#         while startingRow <= endingRow and startingColumn <= endingColumn:
#             for i in range(startingColumn, endingColumn):  # left to right
#                 result.append(array[startingRow][i])

#             for j in range(startingRow, endingRow):  # up to down
#                 result.append(array[j][endingColumn])
#             if startingColumn != endingColumn:
#                 for i in range(endingColumn , startingColumn, -1):
#                     result.append(array[endingRow][i])  # right to left
#             if startingRow != endingRow:
#                 for j in range(endingRow, startingRow, -1):
#                     result.append(array[j][startingColumn])  # down to up
#             if startingRow == endingRow and startingColumn == endingColumn:
#                 result.append(array[startingRow][endingColumn])
#             startingRow += 1
#             startingColumn += 1
#             endingColumn -= 1
#             endingRow -= 1
#         return result
        
# array = [[i for i in range(j, j + 3)] for j in range(6, 9, 1)]
array = [[6, 9, 7]]
print(array)
print(len(array))
print(len(array[0]))

startingRow, startingColumn = 0, 0
endingRow, endingColumn = len(array) - 1, len(array[0]) - 1

result = []
count=0

while startingRow <= endingRow and startingColumn <= endingColumn:
    for i in range(startingColumn, endingColumn):  # left to right
            result.append(array[startingRow][i])
            count+=1

    for j in range(startingRow, endingRow):  # up to down
        result.append(array[j][endingColumn])
        count+=1

    if startingColumn != endingColumn:
        for i in range(endingColumn , startingColumn, -1):
            result.append(array[endingRow][i])  # right to left
            count+=1
    if startingRow != endingRow:
        for j in range(endingRow, startingRow, -1):
            result.append(array[j][startingColumn])
            count+=1
                # down to up
    if startingRow == endingRow and startingColumn == endingColumn:
        if count<len(array) * len(array[0]):
            result.append(array[startingRow][endingColumn])
    startingRow += 1
    startingColumn += 1
    endingColumn -= 1
    endingRow -= 1

print(result)