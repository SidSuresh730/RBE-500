### libraries to get command line arguments
import sys
import string

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
    

# create a tree with no children nodes
def make_leaf(node):
    return Tree(node, None, None)

# check if 
def is_operand(char):
    return type(char)==float or type(char)==int

def print_t_stack(t_stack):
    print('[', end=" ")
    for item in t_stack:
        print(item, end=" ")
    print(']')

# create binary expression tree from list
def lst2tree(lst):
    op = {
        '+':1,
        '-':1,
        '*':2,
        '/':2,
        '^':3,
        ')':0
    }
    t_stack = []
    o_stack = []
    for char in lst:
        if(is_operand(char)):
            t_stack.append(make_leaf(char))
            # debugging print
            # print_t_stack(t_stack)
        elif(char=='('):
            o_stack.append(char)
            # debugging print            
            # print("o: ", end=" ")
            # print(o_stack)
        elif(char==')'):
            while(o_stack[-1]!='('):
                # build a tree from exp in parentheses
                n = o_stack.pop()
                t2 = t_stack.pop()
                t1 = t_stack.pop()
                t = Tree(n, t1, t2)
                t_stack.append(t)
                # debugging print
                # print("t_stack: ") 
                # print_t_stack(t_stack)
            # Remove '(' from stack
            o_stack.pop()
            # debugging print
            # print("o: ", end=" ")
            # print(o_stack)
        elif(char in op):
            # if operator stack is empty or only contains a (, just append
            if(len(o_stack)==0 or o_stack[-1]=='('):
                o_stack.append(char)
                # debugging print
                # print("o: ", end=" ")
                # print(o_stack)
            # until lower priority operator is found, build the tree, then add current op
            else:
                while(len(o_stack)>0 and op[o_stack[-1]]>op[char]):
                    n = o_stack.pop()
                    t2 = t_stack.pop()
                    t1 = t_stack.pop()
                    t = Tree(n, t1, t2)
                    t_stack.append(t)
                o_stack.append(char)
                # debugging print
                # print("o: ", end=" ")
                # print(o_stack)
    # build the rest of the tree
    while(len(o_stack)!=0):
        n = o_stack.pop()
        t2 = t_stack.pop()
        t1 = t_stack.pop()
        t = Tree(n, t1, t2)
        t_stack.append(t)
        # debugging print
        #print_t_stack(t_stack)
        #print("o: ", end=" ")
        #print(o_stack)
    # returns the binary tree
    return t_stack.pop()
        
def exp2lst(exp):
    lst = []
    ## set when the beginning of an operand is detected
    i_flag = False
    ## set when close parentheses detected
    cp_flag = False
    p_count = 0
    op_list = ["(", "*", "/", "+", "-", ")", "^"]
    for char in exp:
        # operand detected
        if (char.isnumeric()):
            # build the number
            if(i_flag):
                num = lst.pop()
                num = num*10+int(char)
                lst.append(num)
            # start new number
            else:
                i_flag = True
                lst.append(int(char))
        elif(char == '('):
            p_count+=1
            lst.append(char)
        elif(char==')'):
            cp_flag = True
            p_count-=1
            lst.append(char)
        # operator detected
        elif (char in op_list):
            # multiple adjacent operators
            if(not (i_flag or cp_flag)):
                print("Invalid...")
                return
            i_flag = False
            cp_flag = False
            lst.append(char)
        # random character detected
        else:
            print("Invalid!")
            return None
    # unmatched parentheses
    if(p_count!=0):
        print("Invalid")
        return None
    # expression incomplete, ends in operator
    if(not (type(lst[len(lst)-1]) == int or lst[len(lst)-1] == ')')):
        print("Invalid.")
        return None
    return lst

# Solve a valid binary expression tree
def solve_tree(tree):
    if (tree.is_leaf()):
        return tree.get_node()
    if (tree.get_node()=='+'):
        return solve_tree(tree.get_left())+solve_tree(tree.get_right())
    if (tree.get_node()=='-'):
        return solve_tree(tree.get_left())-solve_tree(tree.get_right())
    if (tree.get_node()=='*'):
        return solve_tree(tree.get_left())*solve_tree(tree.get_right())
    if (tree.get_node()=='/'):
        return float(solve_tree(tree.get_left())/solve_tree(tree.get_right()))
    if (tree.get_node()=='^'):
        return solve_tree(tree.get_left())**solve_tree(tree.get_right())
    return -999 # error condition

def main(argv):
    if(len(argv)==1):
        print(0)
    else:
        lst = exp2lst(argv[1])
        t = lst2tree(lst)
        print(solve_tree(t))

if __name__ == '__main__':
    main(sys.argv)



