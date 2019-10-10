'''***
    *
   ***'''
t = int(input())
while t:
	t-=1
	n,k = input().split()
	n = int(n)
	k = int(k)
	if (n % (k*k)) == 0:
		print("NO")
	else:
		print("YES")
