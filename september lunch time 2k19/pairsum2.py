t=int(input())
while t:
	t-=1
	n,Q=list(map(int,input().split()))
	b=list(map(int,input().split()))
	a=[]
	l=[0]
	for j in b:
			l.append(j-l[-1])
	'''for i in range(n//2+1):
		l=[i]
		for j in b:
			l.append(j-l[-1])
		a.append(l)'''
	#print(a)
	while Q:
		Q-=1
		p,q=list(map(int,input().split()))
		x=[]
		f=0
		
		for i in range(2):
			if p % 2==0:
				x.append(l[p-1]+i)
			else:
				x.append(l[p-1]-i)
			if q%2 ==0:
				x[-1]+=l[q-1]+i
			else:
				x[-1]+=l[q-1]-i	
		
		if len(set(x))==1:
			print(x[0])
		else:
			print('UNKNOWN')
			
