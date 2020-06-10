import sys
for _ in range(int(input())):
    larr=int(input())
    ar = list(map(int,input().split()))
    tmp=[1]*larr
    minct= sys.maxsize * 2 + 1
    maxct= 0
    for i in range(larr-1):
        if ar[i+1] - ar[i] < 3:
            tmp[i+1] = tmp[i] + 1
        else:
            minct = min(minct,tmp[i])
            maxct = max(maxct,tmp[i])
    
    minct=min(minct,tmp[larr-1])
    maxct = max(maxct,tmp[larr-1])
    
    print(minct,maxct,sep=" ")



