for _ in range(int(input())):
    tmp = input()
    count  = 0
    # print(tmp)
    i = 0
    while(i<len(tmp)-1):
        # print(tmp[i])
        if(tmp[i]=='x' and tmp[i+1]=='y') or (tmp[i]=='y' and tmp[i+1]=='x'):
            count+=1
            i+=1
        i+=1
    print(count)