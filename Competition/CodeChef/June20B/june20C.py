
for _ in range(int(input())):
    a = {
    5:0,
    10:0,
    15:0
    }
    n=int(input())
    arr = list(map(int,input().split()))
    flag=0
    for i in arr:
        if i == 5:
           a[5]+=1
        elif i == 10:
            if a[5] > 0:
                a[5] = a[5] - 1
                a[10]+=1
            else:
                flag= 1 
                print("NO")
                break
        else:
            if a[10] > 0:
                a[10]= a[10]  - 1
                a[15]+=1
            elif a[5] > 1:
                a[5] = a[5] - 2
                a[15]+=1
            else:
                flag= 1 
                print("NO")
                break

            
    if flag == 0:
        print("YES") 

