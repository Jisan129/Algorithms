class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


class Tree:
    def __init__(self):
        self.root = None

    def insert(self, value):
        if not self.root:
            self.root = Node(value)
        else:
            self.insert_recursively(self.root, value)

    def insert_recursively(self, node, value):
        if value > node.value:
            if not node.right:
                node.right = Node(value)
            else:
                self.insert_recursively(node.right, value)
        elif value < node.value:
            if not node.left:
                node.left = Node(value)
            if node.left:
                self.insert_recursively(node.left, value)

    def search(self, value):
        if self.root.value == value:
            return True
        else:
            temp = self.root
            while temp:
                if value == temp.value:
                    return True
                if value > temp.value:
                    temp = temp.right
                elif value < temp.value:
                    temp = temp.left
            return False


tree = Tree()
tree.insert(5)
tree.insert(1)
tree.insert(6)
tree.insert(2)
tree.insert(7)
tree.insert(3)
tree.insert(8)
print(tree.search(17))
