//	 Letz see
#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, j, n, q, b, c, type, taste;
    cin >> n >> q;
    
    vector <ll> h(n+1), a(n+1), up(n+1), down(n+1);
    
    for(i=1; i<=n; ++i)
    	cin >> h[i];
    	
    for(i=1; i<=n; ++i)
    	cin >> a[i];
    	
    i = j = 1;
    up[i] = a[i];
    while( j <= n ) {
		if(h[j] > h[i]) {
			i = j;
			up[j] = a[j];
		}
		++j;
	}
    i = j = n;
	down[i] = a[i];
	while( j >= 1 ) {
		if(h[j] > h[i]) {
			i = j;
			down[j] = a[j];
		}
		--j;
	}
	
    for(ll x : up)
		cout << x << ' ';
	cout << '\n';

	for(ll x : down)
		cout << x << ' ';
	cout << '\n';
    

    
    for(i=1; i<=n; ++i)
    	up[i] = a[i] + up[i-1];
    	
    for(i=n; i>=1; --i)
    	down[i] = a[i] + down[i-1];
    /*	
	for(ll x : up)
		cout << x << ' ';
	cout << '\n';

	for(ll x : down)
		cout << x << ' ';
	cout << '\n';
	
    
    while(q--) {
    	cin >> type >> b >> c;
    	
    	if(type == 1)
    		a[b] = c;
    	else {
			if(c < b) {
				i = j = c;
				taste = a[c];
				while( j <= b ) {
					if(h[j] > h[i]) {
						i = j;
						taste += a[j];
					}
					++j;
				}
				if(i == b)
					cout << taste;
				else
					cout << -1;
			} else {
				i = j = c;
				taste = a[c];
				while( j >= b ) {
					if(h[j] > h[i]) {
						i = j;
						taste += a[j];
					}
					--j;
				}
				if(i == b)
					cout << taste;
				else
					cout << -1;
			}
			cout << '\n';
		}
		/*
		for(ll x : a)
			cout << x << ' ';
		cout << '\n';
		
	}*/
	return 0;
}
/*

	
1 2 3  4  5
1 3 7 15 31

1   2  3  4  5
16 16 16 16 16 

*/
