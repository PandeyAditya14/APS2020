men=[]
women=[]
class Man:
    pref=[]
    nxt_pro = 0
    single =True
    id

    def __init__(self  ,prefr, id):
        self.pref =  prefr
        self.id = id

    def findMatch(self):
        while (self.single):
            id = pref[nxt_pro]
            nxt_pro+=1
            res =women[id-1].propose(self.id)
            if res == True:
                self.single =True
    
    def breakup(self):
        self.single =True
    def printPref(self):
        print(self.pref)
class Woman:
    id
    pref=[]
    count =0
    currentPartnerId = -1
    single = True
    def __init__(self,prefr , id):
        self.pref = prefr
        self.id = id
    
    def isBetter(self , id):
        return self.pref.index( self.currentPartnerId ) < self.pref.index(id)
    
    def breakup():
        men[id-1].breakup()

    def propose(self , id):
        count+=1
        if(self.single):
            self.currentPartnerId = id
            self.single =False
            return True
        else:
            if(self.isBetter(id)):
                self.breakup()
                self.currentPartnerId = id
                self.single =False
                return True
            else:
                return False
    def printPref(self):
        print(self.pref)
    def retCount(self):
        return self.count



n = int(input())


for i in range(n):
    temp = list(map(int,input().split()))
    men.append(Man(temp,i+1))

for i in range(n):
    temp = list(map(int,input().split()))
    women.append(Woman(temp,i+1))

numquery = int(input())
for _ in range(numquery):
    qu = int(input())
    women[qu-1 ].count()