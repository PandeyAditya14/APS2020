t=int(input())
l=[16,32,44,55]
for i in range(t):
    n=int(input())
    if n==1:print('20')
    elif n==2:print('36')
    elif n==3:print('51')
    elif n==4:print('60')
    else:print(((n//4)*44)+l[n%4])