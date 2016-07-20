#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> v(N);
    for (auto& i : v) cin >> i;
    vector<vector<int> > dp(N, vector<int>(M));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            if (v[i][j] == '*') dp[i][j]++;
            if (i > 0) dp[i][j] += dp[i-1][j];
            if (j > 0) dp[i][j] += dp[i][j-1];
            if (i > 0 && j > 0) dp[i][j] -= dp[i-1][j-1];
        }

    int x = -1, y = -1;
    int ans = false;
    for (int i = 0; !ans && i < N; i++) {
        for (int j = 0; j < M; j++) {
            int LU = i > 0 && j > 0 ? dp[i-1][j-1] : 0;
            int RU = i > 0 && j + 1 < M ? dp[i-1][M-1] - dp[i-1][j] : 0;
            int LD = i + 1 < N && j > 0 ? dp[N-1][j-1] - dp[i][j-1] : 0;
            int RD = i + 1 < N && j + 1 < M ? (
                dp[N-1][M-1] - dp[i][M-1] - dp[N-1][j] + dp[i][j]) :
                0;
            if (!LU && !RU && !RD && !LD) {
                x = i + 1;
                y = j + 1;
                ans = true;
            }
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
    if (ans) {
        cout << x << " " << y << endl;
    }


    return 0;
}
