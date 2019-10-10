/***
  *
 ***/
#include<iostream>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	long long n, k, x;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		x=(k%1000000007)*(k%1000000007);
		if(n%x==0)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}
