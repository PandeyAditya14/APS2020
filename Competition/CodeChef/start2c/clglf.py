for _ in range(int(input())):
    n,m = list(map(int , input().split()))
    football = list(map(int , input().split()))
    cricket = list(map(int , input().split()))
    switch = 1
    ch = 0
    fi = 0
    ci = 0
    while fi < n and ci< m :
        if cricket[ci] < football[fi] :
            if ch == 0:
                ch = 1
                switch+=1
            ci+=1
        else:
            if ch == 1 :
                ch = 0
                switch+=1
            fi+=1
    
    print(switch)