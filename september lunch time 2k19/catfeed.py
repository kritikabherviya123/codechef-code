t=int(input())
while t:
	t-=1
	n,m = list(map(int,input().split()))
	a= list(map(int,input().split()))
	d=[0]*n
	
	c=0
	f=0
	for i in a:
		c+=1
		d[i-1]+=1
		if c==n:
			c=0
			if(len(set(d))==1):
				continue
			else:
				f=1;
				break
	if f==0:
		print('YES')
	else:
		print('NO')
