# def binary(s,p,q,find):
#     if find==s[(p+q)/2]:
#         return (p+q)/2
#     elif p==q-1 or p==q:
#         if find==s[q]:
#             return q
#         else:
#             return -1
#     elif find < s[(p+q)/2]:
#         return binary(s,p,(p+q)/2,find)
#     elif find > s[(p+q)/2]:
#         return binary(s,(p+q)/2+1,q,find)
def solve():
    l,q=[],[]
    d=0
    n,m,e=map(int,input().split())
    for i in range(n):
        c=0
        k=[]
        s=input()
        for i in s:
            k.append(i)
        if '1' in k:
            c=k.count('1')
        l.append(k)
        d+=c
    # print(l)
    for i in range(n):
        q=input()
    # print(q)
    # print(d)
    if (d&1) or (n==2 and m==2):
        print(-1)
    else:
        if e==0:
            print(d//2)
        else:
            print(d//2)
            for i in range(n):
                for j in range(m-2):
                    if l[i][j]=='1' and l[i][j+2]=='1':
                        print('R',str(i+1),str(j+1),str(j+3))
                        l[i][j]='0'
                        l[i][j+2]='0'
            for j in range(m):
                for i in range(n-2):
                    if l[i][j]=='1' and l[i+2][j]=='1':
                        print('C',str(j+1),str(i+1),str(i+3))
                        l[i][j]='0'
                        l[i+2][j]='0'
                    
t=int(input())
for i in range(t):
    solve()