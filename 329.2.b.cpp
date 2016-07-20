#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> P;

int main() {
    int n;
    ll x1, x2;
    cin >> n >> x1 >> x2;
    
    vector<P> v;
    for (int i = 0; i < n; i++) {
        ll k, b;
        cin >> k >> b;
        ll y1 = k * x1 + b;
        ll y2 = k * x2 + b;
        v.push_back(P(y1, y2));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; i++) {
        if (v[i].first < v[i + 1].first && v[i].second > v[i + 1].second) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}
