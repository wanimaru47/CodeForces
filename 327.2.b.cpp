#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;
typedef pair<int,int> P;
typedef vector<char> cvec;

int main() {
    cvec v(26);
    for(int i = 0; i < 26; i++) {
        v[i] = (char)('a' + i);
    }

    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    for(int i = 0; i < m; i++) { 
        char s, t;
        cin >> s >> t;
        int l, r;
        for(int j = 0; j < 26; j++) {
            if(v[j] == s) l = j;
            if(v[j] == t) r = j;
        }
        v[r] = s;
        v[l] = t;
    }
    
    for(int i = 0; i < n; i++) {
        str[i] = v[(int)(str[i] - 'a')];
    }
    
    cout << str << endl;

    return 0;
}
