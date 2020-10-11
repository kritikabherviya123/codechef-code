#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, n, t, k;
    cin >> t;
    while(t--) {
    	cin >> n;
    	--n;
    	for(i = 0; i < 8; ++i) {
    		for(j = 0; j < 8; ++j) {
    			if(i==j and i==0)
    				cout << 'O';
    			else if (n) {
    				cout << '.';
    				--n;
    			}
    			else
    				cout << 'X';
    		}
    		cout << '\n';
    	}
    }
    return 0;
}
