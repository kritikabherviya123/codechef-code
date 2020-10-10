#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll i, t, n, x, y;
	cin >> t;
	while(t--) {
		map <ll, ll> xx, yy;
		cin >> n;
		for(i = 0; i < (n*4) - 1; ++i) {
			cin >> x >> y;
			++xx[x];
			++yy[y];
		}
		for(auto itr : xx)
			if((itr.second)&1) {
				x = itr.first;
				break;
			}
		for(auto itr : yy)
			if((itr.second)&1) {
				y = itr.first;
				break;
			}
		cout << x << ' ' << y << '\n';
	}
	return 0;
}
