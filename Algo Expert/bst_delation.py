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
                if temp.value == None:
                    return False
                elif value == temp.value:
                    return True
                elif value > temp.value:
                    temp = temp.right
                elif value < temp.value:
                    temp = temp.left

            return False

    def search_node(self, value):
        if self.root.value == value:
            return self.root
        else:
            temp = self.root
            while temp:
                if value == temp.value:
                    return temp
                if value > temp.value:
                    temp = temp.right
                elif value < temp.value:
                    temp = temp.left
            return False

    def get_type(self, value):
        temp = self.search_node(value)
        node_type = "Leaf"
        if temp.left == None and temp.right == None:
            node_type = "Leaf"
        elif temp.left == None or temp.right == None:
            node_type = "Half"
        elif temp.left != None and temp.right != None:
            node_type = "Full"

        return node_type, temp

    def delete_node(self, value):
        node_type, node = self.get_type(value)
        if node_type == "Full":
            temp = node.left
            while temp is not None:
                if temp.right:
                    temp = temp.right
                else:
                    node.value = temp.value
                    node.right = temp.right
                    node.left = temp.left
                    return

        elif node_type == "Half":
            if node.left is not None:
                temp = node.left
                node.value = temp.value
                node.left = temp.left
                node.right = temp.right

            elif node.right is not None:
                temp = node.right
                node.value = temp.value
                node.right = temp.right
                node.left = temp.left
            print(temp.value)
        elif node_type == "Leaf":
            node.value = None
        else:
            print("Invalid node")

        return node_type


def dfs(node):
    if node is None:
        return
    print(node.value)
    dfs(node.left)
    dfs(node.right)


tree = Tree()
tree.insert(10)
tree.insert(5)
tree.insert(15)
tree.insert(12)
tree.insert(18)
tree.insert(17)
tree.insert(7)
tree.insert(9)
tree.insert(8)

dfs(tree.root)

tree.delete_node(10)

print("After deleting 5")
dfs(tree.root)

