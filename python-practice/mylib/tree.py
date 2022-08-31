__package__ = __name__
class Tree:

    # create a binary tree
    def __init__(self, node, left, right):
        self._node = node
        self._left = left
        self._right = right

    # return if tree is a leaf (no children branches)
    def is_leaf(self):
        return self._left == None and self._right == None

    # postfix print of binary tree
    def __str__(self):
        if(self.is_leaf()):
            return '('+str(self._node)+')'
            #return '()' + str(self._node) + '()'
        return self._left.__str__() + self._right.__str__() + str(self._node) 

    # getter for left branch
    def get_left(self):
        return self._left
    
    # getter for right branch
    def get_right(self):
        return self._right
    
    # getter for node
    def get_node(self):
        return self._node