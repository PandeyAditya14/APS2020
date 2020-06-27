#Second question was to take an expression as {(<)}and find if everything is closed
for _ in range(int(input())):
    temp = input()
    stack=[]
    flag = 0
    inp_arr=['<','(','[','{']
    op_arr=['>',')',']','}']
    for i in temp:
        if i in inp_arr:
            stack.append(i)
        else:
            if len(stack) == 0:
                flag = 1
                break
            elif (stack.pop() != inp_arr[op_arr.index(i)]):
                # print("NO!")
                flag = 1
                break
    

    if(len(stack) == 0 and flag == 0 ):
        print("YES")
    else:
        print("NO")