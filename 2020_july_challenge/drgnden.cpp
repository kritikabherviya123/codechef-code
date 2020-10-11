//	 Letz see
#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll i, j, n, q, b, c, type, taste;
    cin >> n >> q;
    
    vector <ll> h(n+1), a(n+1);
    
    for(i=1; i<=n; ++i)
    	cin >> h[i];
    	
    for(i=1; i<=n; ++i)
    	cin >> a[i];
    	
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
		*/
	}
	return 0;
}
/*

	
1 2 3  4  5
1 3 7 15 31

1   2  3  4  5
16 16 16 16 16 

*/
