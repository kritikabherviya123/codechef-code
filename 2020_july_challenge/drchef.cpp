#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll i, t, dayz, n, x, pos;
	cin >> t;
	while(t--) {
		cin >> n >> x;
		vector <ll> ctrz(n);
		for(i = 0; i < n; ++i) 
			cin >> ctrz[i];
		sort(ctrz.begin(), ctrz.end());
		pos = (lower_bound(ctrz.begin(), ctrz.end(), x) - ctrz.begin());
		if((pos!=0) and (2*ctrz[pos-1] >= x))
				--pos;
		
		//cout << pos << '\n';
		dayz = (pos);
		for(i = pos; i < n; ++i) {
			++dayz;
			while(x < ctrz[i]) {
				x += x;
				++dayz;
				//cout << "  d " << dayz ;
			}
			x = min(ctrz[i], x);
			x += x;
		}
		cout << dayz << '\n';
	}
	return 0;
}

/*
1
7 10
1 2 8 20 30 70 150

10


1
5 5
1 2 3 4 6

5


1
5 5
1 3 6 6 6 

5


1
7 10
1 2 8 20 21 42 150

9

1
1 5
10

2

4
5 5
11 11 11 11 11
5 5
5 5 5 5 5
2 25
99 99
1 25
99

7
5
4
3
*/

