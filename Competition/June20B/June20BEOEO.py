for _ in range(int(input())):
    ts = int(input())
    tscp = ts
    pw2= 1
    while(ts % 2== 0 and ts >= 2 ):
        pw2*=2
        ts/=2
    print(int(tscp/(pw2*2)))