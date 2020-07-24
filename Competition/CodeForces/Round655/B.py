from math import ceil , sqrt
for _ in range(int(input())):
    n = int(input())
    if (n % 2 == 0):
        print(n//2,n//2,sep=" ")
    else:
        x = int(ceil(sqrt(n)))
        i = x
        while( i > 0):
            if(n%i == 0):
                print(i,n-i,sep=" ")
                break
            i-=1