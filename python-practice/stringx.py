while
    ### Get input
    print("Enter a word:")
    word = str(input())
    x_flag = 0
    for char in word:
        if char == 'x' or char == 'X':
            print("yes")
            x_flag = 1
            break
    if(not x_flag):
        print("no")