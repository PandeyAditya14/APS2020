dic_pre = {}
dic_post = {}
for _ in range(int(input())):
    for _ in range(int(input())):
        inp = list(map(int,input().split()))
        dic_pre[inp[1]]=inp[0]
        dic_post[inp[2]]=inp[0]
    
    flag = True
    for i , j  in zip(sorted(dic_pre.keys() , reverse =False),sorted(dic_pre.keys() , reverse =True)):
        print(i,j)
        if(dic_pre[i] != dic_post[j]):
            flag = False
    if(flag):
        print(1)
    else:
        print(0)