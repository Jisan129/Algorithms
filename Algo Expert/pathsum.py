class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

    def dfs(self,node,targetSum):
        if node != None:
            targetSum-=node.val
        if node.right==None and node.left==None and targetSum==0:
            print("True")
        elif node.right==None and node.left == None and targetSum != 0:
            targetSum+=node.val
        if node.left != None:
            self.dfs(node.left,targetSum)
        if node.right != None:
            self.dfs(node.right,targetSum)

root=TreeNode(1)
root.left=TreeNode(2)
root.right=TreeNode(3)
root.left.left=TreeNode(4)
root.left.right=TreeNode(5)
root.right.left=TreeNode(6)
root.right.right=TreeNode(7)

root.dfs(root,11)


