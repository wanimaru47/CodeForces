#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    bool flag = false;
    int C = N * M;
    while (C--) {
        char c;
        cin >> c;
        if (c == 'G' || c == 'W' || c == 'B') {
        } else {
            flag = true;
        }
    }

    if (flag) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;

    return 0;
}
