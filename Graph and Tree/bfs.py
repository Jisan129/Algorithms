from collections import deque


class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def bfs(node):
    queue=deque()
    queue.append(node)

    while queue:
        subject=queue.popleft()
        print(subject.val)
        if subject.left:
            queue.append(subject.left)
        if subject.right:
            queue.append(subject.right)

        



root=TreeNode(1)
root.left=TreeNode(2)
root.right=TreeNode(3)
root.left.left=TreeNode(4)
root.left.right=TreeNode(5)
root.right.left=TreeNode(6)
root.right.right=TreeNode(7)

bfs(root)