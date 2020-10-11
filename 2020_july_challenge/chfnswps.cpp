#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool poss(unordered_map <ll, ll> f) {
	for(auto itr : f)
		if((itr.second)&1)
			return true;
	return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, t, n, cozt, count, minz;
    cin >> t;
    while(t--) {
    	cin >> n;
    	unordered_map <ll, ll> freq, fa, fb;
    	set <ll> s;
    	vector <ll> a(n), b(n), sel;
    	for(i = 0; i < n; ++i) {
    		cin >> a[i];
    		++freq[a[i]];
    		++fa[a[i]];
    		s.insert(a[i]);
    	}
    	for(i = 0; i < n; ++i) {
    		cin >> b[i];
    		++freq[b[i]];
    		++fb[b[i]];
    		s.insert(b[i]);
    	}
    	if(poss(freq))
    		cout << -1 << '\n';
    	else {
    		cozt = count = 0;
    		minz = min( *min_element(a.begin(), a.end()) , *min_element(b.begin(), b.end()) );
    		for(auto itr : s) {
   				count = abs(fa[itr] - fb[itr]);
				for(i = 0; i < (count/2); ++i)
					sel.push_back(itr);
    		}
			sort(sel.begin(), sel.end());  
			for(i = 0; i < (sel.size()/2); ++i) {
				cozt += min( sel[i], 2 * minz );
			}
			cout << cozt << '\n';
		}
	}
	return 0;
}
/*
ATCODER tmwilliamlin168

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define F_OR(i, a, b, s) for (int i = (a); ((s) > 0 ? i < (b) : i > (b)); i += (s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)

#define E_ACH2(x, a) for (auto& x: a)
#define E_ACH3(x, y, a) for (auto& [x, y]: a)
#define E_ACH4(x, y, z, a) for (auto& [x, y, z]: a)
#define E_ACHC(...) GET5(__VA_ARGS__, E_ACH4, E_ACH3, E_ACH2)
#define EACH(...) E_ACHC(__VA_ARGS__)(__VA_ARGS__)

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	map<string, int> mp{{"AC", 0}, {"WA", 1}, {"TLE", 2}, {"RE", 3}};
	int n, c[4]={};
	cin >> n;
	FOR(n) {
		string s;
		cin >> s;
		++c[mp[s]];
	}
	//cout << c[0] << " " << c[1] << " " << c[2] << " " << c[3];
	FOR(4) {
		EACH(a, mp)
			if(a.second==i)
				cout << a.first;
		cout << " x " << c[i] << "\n";
	}
}


3
5
1 1 3 5 5
4 3 2 2 4
4
2 2 2 2
3 3 4 4
4
1 1 1 1
3 3 4 4

1
8
2 2 2 2 2 2 2 2
3 3 3 3 3 3 3 3

1
5
2 2 2 2 3
3 4 4 4 4

1
4
1 1 1 3
1 3 4 4

1
3
2 3 3
2 4 4

1
5
2 3 3 3 3
2 4 4 4 4

1
5
2 3 8 3 8
2 4 9 4 9

1
3
1 2 2
1 3 3

1
3
1 3 3
1 4 4



*/
