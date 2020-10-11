#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int i, t, n, anz, el, nx;
    cin >> t;
    while(t--) {
        cin >> n >> el;
        anz = 0;
        for(i = 1; i < n; ++i) {
            cin >> nx;
            anz += abs(nx - el) - 1;
            el = nx;
        }
        cout << anz << '\n';
    }
    return 0;
}
