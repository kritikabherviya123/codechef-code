/***
  *
 ***/
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int t, n, i, lb, ub;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int c[n+1], h[n+1], pre[n+1]={0}; 
		c[0]=h[0]=pre[0]=0;
		for(i=1;i<=n;++i)
		{
			cin>>c[i];
			lb = (i-c[i]);
			ub = (c[i]+i);
			if(lb<=0)
				++pre[1];
			else if(lb>n)
				++pre[n];
			else
				++pre[lb];
			if(ub<=0)
				--pre[1];
			else if(ub>n)
				--pre[n+1];
			else
				--pre[ub+1];
		}
		for(i=1;i<=n;++i)
			cin>>h[i];
		for(i=2;i<=n;++i)
			pre[i] = pre[i] + pre[i-1];
		sort(h,h+n+1);
		sort(pre,pre+n+1);
		for(i=1;i<=n;++i)
			if(h[i]!=pre[i])
				break;
		if(i>n)
			cout<<"YES"<<'\n';
		else
			cout<<"NO"<<'\n';
	}
	return 0;
}
