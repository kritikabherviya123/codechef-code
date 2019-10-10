/***
  *
 ***/
#include<iostream>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long int i, max, n, t;
	cin>>t;
	while(t--)
	{
		max=0;
		cin>>n;
		int a[n], b[n];
		for(i=0;i<n;++i)
			cin>>a[i];
		for(i=0;i<n;++i)
		{
			cin>>b[i];
			if(((a[i]*20)-(b[i]*10))>max)
				max = ((a[i]*20)-(b[i]*10));
		}
		cout<<max<<'\n';
	}
	return 0;
}			
