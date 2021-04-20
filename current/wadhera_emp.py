t,q,d=map(int,input().split())
for i in range(t):
    l1,m1=pow(10,18)*-1,pow(10,18)*-1
    l2,m2=pow(10,18),pow(10,18)
    l3,m3=0,0
    print('1 '+str(l3)+' '+str(m3),flush=True)
    s=input()
    while len(s)==2:
        if s[0]=='P':
            l2=l3-1+d
            l1-=d
        elif s[0]=='N':
            l1=l3 +1 -d
            l2+=d
        else:
            l1=l3-d
            l2=l3+d
        if s[1]=='P':
            m2=m3-1+d
            m1-=d
        elif s[1]=='N':
            m1=m3+1-d
            m2+=d
        else:
            m1=m3-d
            m2=m3+d
        
        if d and ((l2-l1)<4) and ((m2-m1)<4):
            break
        l3=(l1+l2)//2
        m3=(m1+m2)//2
        print('1 '+str(l3)+' '+str(m3), flush=True)
        s=input()
    if len(s)==2:
        if (l2 - l1) == 2 and (m2 - m1) == 2:
            print("2 "+str(l1)+" "+str(m1)+" "+str(l2)+" "+str(m2), flush=True)
            s=input()
        
        elif (l2 - l1) == 2:
            print("2 "+str(l1)+" "+str(m1)+" "+str(l1+2)+" "+str(m1+2), flush=True)
            s=input()
            if len(s) == 2:
                print("2 "+str(l1)+" "+str(m1)+" "+str(l1+2)+" "+str(m1+2), flush=True)
                s=input()
            
            elif len(s)==3:
                print("2 "+str(l1)+" "+str(m1+2)+" "+str(l1+2)+" "+str(m1+4), flush=True)
                s=input()
            
        
        elif (m2 - m1) == 2:
            print("2 "+str(l1)+" "+str(m1)+" "+str(l1+2)+" "+str(m1+2), flush=True)
            s=input()
            if len(s)== 2:
                print("2 "+str(l1)+" "+str(m1)+" "+str(l1+2)+" "+str(m1+2), flush=True)
                s=input()
            
            elif len(s) == 3:
                print("2 "+str(l1+2)+" "+str(m1)+" "+str(l1+4)+" "+str(m1+2), flush=True)
                s=input()
            
        
        else:
            print("2 "+str(l1+1)+" "+str(m1)+" "+str(l1+3)+" "+str(m2), flush=True)
            s=input()
            if len(s)==2:
                print("2 "+str(l1+1)+" "+str(m1)+" "+str(l1+3)+" "+str(m1+2), flush=True)
                s=input()
                if len(s)==2:
                    print("2 "+str(l1+1)+" "+str(m1)+" "+str(l1+3)+" "+str(m1+2), flush=True)
                    s=input()
                
                elif len(s)==3:
                    print("2 "+str(l1+1)+" "+str(m1+2)+" "+str(l1+3)+" "+str(m1+4), flush=True)
                    s=input()
        
            elif len(s)==3:
                print("2 "+str(l1-1)+" "+str(m1)+" "+str(l1+1)+" "+str(m1+2), flush=True)
                s=input()
                if len(s)==2:
                    print("2 "+str(l1-1)+" "+str(m1)+" "+str(l1+1)+" "+str(m1+2), flush=True)
                    s=input()

                elif len(s)==3:
                    print("2 "+str(l1-1)+" "+str(m1+2)+" "+str(l1+1)+" "+str(m1+4), flush=True)
                    s=input()