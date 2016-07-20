#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, res = 0; cin >> n;
    vector<string> v(n);
    for(auto &i : v) cin >> i;
    for (int s = 'a'; s <= 'z'; s++) {
        for (int t = 'a'; t <= 'z'; t++) {
            if (s == t) continue;
            int total = 0;
            for(auto str : v) {
                bool flag = true;
                for (int i = 0; i < str.size(); i++) {
                    if (str[i] != s && str[i] != t) {
                        flag = false;
                        break;
                    }
                }
                if (flag) total += str.size();
            }
            res = max(res, total);
        }
    }
    cout << res << endl;

    return 0;
}
