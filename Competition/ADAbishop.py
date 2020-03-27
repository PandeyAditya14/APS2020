mv = ['3 3' , '1 5' , '2 6' , '1 7' , '2 8' , '3 7' , '4 8' , '5 7' , '6 8' , '8 6' , '7 5' , '8 4' , '7 3' , '8 2' , '7 1' , '6 2' , '5 1' , '4 2' , '3 1' , '1 3' , '4 6' , '6 4' , '5 3',  '4 4' , '8 8']
for _ in range( int( input() ) ):
    r , c = map(int , input().split())
    if r == 1 and c == 1:
        print(len(mv))
        for i in mv :
            print(i)
    else:
        print(len(mv)+2)
        x = int((r+c) / 2)
        print(x,x,sep=" ")
        print("1 1")
        for i in mv :
            print(i)
        

        