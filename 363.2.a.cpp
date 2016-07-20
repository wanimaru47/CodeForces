#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string str;
    cin >> N >> str;

    long long int ans = 1LL << 32, pre, preL = - (1LL << 32);
    cin >> pre;
    if (str[0] == 'R') preL = pre;
    for (int i = 0; i < N-1; i++) {
        int now;
        cin >> now;
        if (str[i+1] == 'L') {
            ans = min(ans, (now - preL) / 2LL);
        } else {
            preL = now;
        }
    }

    if (ans > 1e9) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
