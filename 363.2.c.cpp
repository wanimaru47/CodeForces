#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for (auto& i : v) cin >> i;

    vector<vector<int> > dp(N+1, vector<int>(4, 1000));
    dp[0][0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            if (dp[i][j] == 1000) continue;

            dp[i+1][0] = min(dp[i+1][0], dp[i][j] + 1);
            if (v[i] == 1 && j != 1) dp[i+1][1] = min(dp[i+1][1], dp[i][j]);
            if (v[i] == 2 && j != 2) dp[i+1][2] = min(dp[i+1][2], dp[i][j]);
            if (v[i] == 3) {
                if (j == 0) {
                    dp[i+1][1] = min(dp[i+1][1], dp[i][j]);
                    dp[i+1][2] = min(dp[i+1][2], dp[i][j]);
                } else if (j == 1)
                    dp[i+1][2] = min(dp[i+1][2], dp[i][j]);
                else
                    dp[i+1][1] = min(dp[i+1][1], dp[i][j]);
            }
        }
    }

    int ans = 1000;
    for (int i = 0; i < 3; i++) {
        ans = min(ans, dp[N][i]);
    }

    cout << ans << endl;

    return 0;
}
