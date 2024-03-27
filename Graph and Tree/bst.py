import math


class Treenode:
    def __init__(self, value) -> None:
        self.value = value
        self.right = None
        self.left = None


number_list = []


def dfs(node):
    if node is None:
        return
    number_list.append(node.value)
    dfs(node.left)
    dfs(node.right)


root = Treenode(10)
root.left = Treenode(30)
root.right = Treenode(20)
root.left.right = Treenode(40)
root.right.left = Treenode(50)

dfs(root)
def binarySearch(list, key):
    list2 = sorted(list)
    left, right = 0, len(list) - 1

    middle = math.ceil((right - left) / 2)
    while right > left:
        middle = math.ceil((right + left) / 2)
        if list2[middle] == key:
            return middle
        elif list2[middle] < key:
            left = middle + 1
        elif list2[middle] > key:
            right = middle - 1

    return -1


print(binarySearch(number_list, 30))
