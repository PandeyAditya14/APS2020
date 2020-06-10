def dayofweek(d, m, y): 
    t = [ 0, 3, 2, 5, 0, 3, 
          5, 1, 4, 6, 2, 4 ] 
    y -= m < 3
    return (( y + int(y / 4) - int(y / 100) 
             + int(y / 400) + t[m - 1] + d) % 7) 

for _ in range(int(input())):
    m1,y1= list(map(int,input().split()))
    m2,y2= list(map(int,input().split()))
    
    flag = 0
    if(y1 != y2):
        if m1>2:
            y1+=1
        if  m2<2:
            y2-=1
    else:
        if (m1 != 2 and m2 !=2):
            flag =1
        # elif(m1 == 2 and m2 != 2):


    if flag == 0:    
        ex = (y2-y1)//400
        sum_tot = ex*101
        ny2=y2 - ex*400
        # ny1=y1%400
        # if(ny1==0):
        #     ny1=1
        # if ny2 == ny1:
        #     ny2+=1
        
        # if ny2==0:
        #     ny2=399
        # print(y1,ny2,sep="  , ")
        # if y2-y1<400:
        #     ny2= y2
        #     ny1 = y1
        for i in range (y1,ny2+1):
            x = dayofweek(1,2,i)
            if(i%4 == 0 and i%100!=0):
                if(x == 6):
                    sum_tot+=1
            else:
                if(x == 6 or x ==0):
                    sum_tot+=1
        print(sum_tot)
    else:
        print(0) 
