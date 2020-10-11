#include <bits/stdc++.h>

using namespace std;

long long sod(long long num) {
	long long sum = 0;
	while(num) {
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long i, n, t, ct, mt, cn, mn;
	cin >> t;
	while(t--) {
		ct = mt = 0;
		cin >> n;
		while(n--) {
			cin >> cn >> mn;
			if(sod(cn) > sod(mn)) 
				++ct;
			else if(sod(cn) < sod(mn)) 
				++mt;
			else {
				++ct;
				++mt;
			}
			
		}
		if(ct > mt)
			cout << 0 << ' ' << ct << '\n';
		else if(mt > ct)
			cout << 1 << ' ' << mt << '\n';
		else
			cout << 2 << ' ' << ct << '\n';
	}
	return 0;
}
