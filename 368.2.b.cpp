#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> u(M), v(M);
    vector<long long int> l(M);
    for (int i = 0; i < M; i++) {
        cin >> u[i] >> v[i] >> l[i];
    }

    vector<bool> f(N+1,true);
    for (int i = 0; i < K; i++) {
        int a;
        cin >> a;
        f[a] = false;
    }

    long long int inf = 1LL << 32;
    long long int ans = inf;
    for (int i = 0; i < M; i++) {
        if (f[u[i]] != f[v[i]]) {
            ans = min(ans, l[i]);
        }
    }

    if (inf == ans) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
