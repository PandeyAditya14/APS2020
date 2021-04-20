import heapq
mod=pow(10,9)+7
graph=[[] for i in range(100001)]
A=[0 for i in range(100001)]
B=[0 for i in range(100001)]
con=[0 for i in range(100001)]
par=[0 for i in range(100001)]
h=[0 for i in range(100001)]
a=[0 for i in range(100001)]
b=[0 for i in range(100001)]
vis=[0 for i in range(100001)]
sset=[]
lt=[]

arr=[0]
heapq.heapify(lt)
def solve1(sup,d):
	vis[sup]+=1
	h[sup]=d
	is_it=True
	for chd in graph[sup]:
		if not vis[chd]:
			par[chd]=sup
			solve1(chd,d+1)
			is_it=False
	if is_it==True:
		lt.append([d,sup])
def done(n,s):
	# print(lt)
	for i in range(n+1):
		graph[i].clear()
		a[i],b[i],par[i],h[i]=0,0,0,0
	while len(lt)>0:
		lt.pop()
def clean(sup):
	con[a[sup]],con[b[sup]],A[a[sup]],A[b[sup]],B[a[sup]],B[b[sup]]=0,0,0,0,0,0

def solve2(sup):
	B[b[sup]]+=1
	A[a[sup]]+=1
	if A[a[sup]]==B[a[sup]]!=0:
		con[a[sup]]-=1
		arr[0]-=1
	elif con[a[sup]]==0:
		con[a[sup]]+=1
		arr[0]+=1
	if A[b[sup]]==B[b[sup]] and con[b[sup]]!=0:
		con[b[sup]]-=1
		arr[0]-=1
	elif con[b[sup]]==0:
		con[b[sup]]+=1
		arr[0]+=1
	vis[sup]+=1
	sset.append(sup)
	if arr[0]==0:
		if vis[par[sup]]==0 and sup!=1:
			lt.append([h[par[sup]],par[sup]])
			clean(sup)
			return 1
		if sup==1:
			clean(sup)
			return 1
	clean(sup)
	return 0
def sol(n,s):
	for i in range(n-1):
		u,v=map(int,input().split())
		graph[u].append(v)
		graph[v].append(u)
	a=list(map(int,input().split()))
	b=list(map(int,input().split()))
	for i in range(1,n+1):
		vis[i],par[i],h[i]=0,0,0
	solve1(1,1)
	for i in range(1,n+1):
		vis[i]=0
	correct=True
	sets=[]
	while len(lt)>0:
		leaf=lt[0]
		if vis[leaf[1]]==0:
			arr[0]=0
			sset.clear()
			if solve2(leaf[1])==0:
				correct=False
			else:
				sets.append(sset)
		if correct==False:
			print('0')
			return 0
		if s==1:
			print(1)
			return 0
		a=1
		x=len(sets)
		for i in range(x):
			u=sets[i][0]
			l=sets[i][0]
			sze=len(sets[i])
			for j in range(1,sze):
				if h[sets[i][j]] > h[l]:
					l=sets[i][j]
				if h[sets[i][j]] < h[u]:
					u=sets[i][j]
			cnt=0
			for c in graph(l):
				if c!=par[l]:
					cnt+=1
			a=(a*(cnt+1))%mod
		print(a)
		return 0


t=int(input())
for i in range(t):
	n,s=map(int,input().split())
	sol(n,s)
	done(n,s)