for _ in range(int(input())):
    n = int(input())
    x1 = 4*n -1
    x = 0
    y = 0
    for _ in range (x1):
        cur_x , cur_y = list(map(int , input().split(' ')))
        x^=cur_x
        y^=cur_y
    print(x,y,sep=" ")