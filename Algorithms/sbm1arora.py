class Solution:
    def solve(self, preorder, inorder):
        if len(inorder) == 0:
            return None

        if len(preorder) == 1:
            root = Tree(preorder.pop())
            return root

        val = preorder.pop(0)
        itr = inorder.index(val)
        root = Tree(val)
        root.left = self.solve(preorder, inorder[:itr])
        root.right = self.solve(preorder, inorder[itr + 1 :])

        return root
