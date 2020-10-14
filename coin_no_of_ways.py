
s=int(input())
c=[1,2,3,4,5,6]

n=6
dp=[]
for i in range(n+1):
	dp.append([0]*(s+1))
#dp[0][0]=1
for i in range(n+1):
	dp[i][0]=1
for i in range(1,s+1):
	for j in range(1,n+1):
		if c[j-1]<=i:
			dp[j][i]= dp[j][i-c[j-1]]+dp[j-1][i]
		else:
			dp[j][i]=dp[j-1][i]
print(dp[n][s])
