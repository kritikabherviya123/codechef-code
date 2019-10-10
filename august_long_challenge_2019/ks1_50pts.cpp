#include<iostream>

using namespace std;
int main()
{
	long long int t, n, i, j, x1, count, l;
	cin>>t;
	while(t--)
	{
		count = 0;
		cin>>n;
		long long int arr[n], x[n+1];
		cin>>arr[0];
		x[0]=0;
		x[1]=arr[0];
		for(i=1;i<n;++i)
			cin>>arr[i], x[i+1] = x[i]^arr[i];;
		for(i=0;i<n-1;++i)
		{
			x1=0;
			for(j=0+i;j<n;++j)
			{
				x1 = x1 ^ arr[j];
				if(x1==0)
				{
					l=j-i+1;
					count+=(l-1);
				}
			}
		}
		cout<<count<<'\n';
		/*for(i=0;i<n+1;++i)
			cout<<x[i]<<' ';
		cout<<'\n';*/
	}
	return 0;
}
