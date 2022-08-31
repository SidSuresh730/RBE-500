while (True):
    ### Get user input
    print("Provide a positive input:")
    inp = int(input())
    ### Factorial logic
    if(inp == 0):
        print(1)
    elif(inp<0):
        print("No")
    else:
        output = 1
        for i in range(inp):
            output*=(i+1)
        print(output)

