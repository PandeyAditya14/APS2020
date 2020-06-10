def fun():
    try:
        t=int(input())
        for k in range(0,t):
            n,p=map(int,input().split())
            d=list(map(int, input().split()))
            over=False
            for i in range(0,n):
                if p%d[i]!=0:
                    over=True
                    break
            for i in range(0,n-1):
                for j in range(i+1,n):
                    if d[j]%d[i]!=0:
                        over=True
                        break
            if over==False:
                print("NO")
            else:
                res=[0]*n
                i=n-1
                while p>0 and i>=0:
                    if p%d[i]==0:
                        temp=int(p/d[i])-1
                        res[i]=temp
                        p=p-(temp*d[i])
                    else:
                        temp=int(p/d[i])+1
                        res[i]=temp
                        p=p-(temp*d[i])
                    i=i-1
                print("YES",end=' ')
                print(" ".join(map(str,res)))
                
    except:
        pass
    
            
     
fun()