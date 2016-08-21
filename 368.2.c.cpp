#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ll N;
    cin >> N;

    if (N%2) {
        for (ll i = 1; i <= N / 2LL; i++) {
            ll sub = i * i + N;
            ll s = floor(sqrt(sub));
            if (s*s == sub) {
                cout << 2*i*s << " " << s*s+i*i << endl;
                return 0;
            }
        }
        cout << -1 << endl;
        return 0;
    } else {
        if (N == 2) cout << -1 << endl;
        else cout << (N/2)*(N/2)-1 << " " << (N/2)*(N/2)+1 << endl;;
    }

    return 0;
}
