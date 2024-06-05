# # array = [[i for i in range(j, j + 3)] for j in range(6, 9, 1)]
# array = [[6, 9, 7]]
# print(array)
# print(len(array))
# print(len(array[0]))

# startingRow, startingColumn = 0, 0
# endingRow, endingColumn = len(array) - 1, len(array[0]) - 1
# finalRow, finalColumn = endingRow + 1, endingColumn + 1
# result = []

# while startingRow <= endingRow and startingColumn <= endingColumn:
#     for i in range(startingColumn, endingColumn):  # left to right
#         result.append(array[startingRow][i])
#     startingColumn += 1
#     for j in range(startingRow, endingRow):  # up to down
#         result.append(array[j][endingColumn])
#     startingRow += 1

#     for i in range(endingColumn, startingColumn, -1):
#         result.append(array[endingRow][i])  # right to left
#     endingColumn -= 1

#     for j in range(endingRow, startingRow, -1):
#         result.append(array[j][startingColumn])  # down to up
#     endingRow -= 1

#     if startingRow == endingRow and startingColumn == endingColumn and len(result) < finalRow * finalColumn:
#         result.append(array[startingRow][endingColumn])

# print(result)



class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix:
            return []

        array = matrix
        startingRow, startingColumn = 0, 0
        endingRow, endingColumn = len(array) - 1, len(array[0]) - 1
        finalRow, finalColumn = endingRow + 1, endingColumn + 1

        result = []

        while startingRow <= endingRow and startingColumn <= endingColumn:
            # Traverse left to right
            for i in range(startingColumn, endingColumn + 1):
                result.append(array[startingRow][i])

            # Traverse top to bottom
            for j in range(startingRow + 1, endingRow + 1):  # Adjusted range
                result.append(array[j][endingColumn])

            # Traverse right to left
            if startingRow != endingRow:
                for i in range(endingColumn - 1, startingColumn - 1, -1):
                    result.append(array[endingRow][i])

            # Traverse bottom to top
            if startingColumn != endingColumn:
                for j in range(endingRow - 1, startingRow, -1):
                    result.append(array[j][startingColumn])

            startingRow += 1
            startingColumn += 1
            endingColumn -= 1
            endingRow -= 1

        return result
