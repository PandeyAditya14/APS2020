for _ in range (int(input())):
    n = int(input())
    if n == 1:
        print(1)
        print(1,1,sep=" ")
    elif n%2 == 0:
        x = int(n/2)
        print(x)
        for i in range(1,n,2):
            print(2,i,i+1,sep=" ")
            i+=1
    else:
        print(n//2)
        print(3,1,2,n,sep=" ")
        for i in range(3,n,2):
            print(2,i,i+1,sep=" ")
            i+=1


