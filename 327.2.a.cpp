#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;
typedef pair<int,int> P;

int main() {
    double I, P, Q;
    cin >> I >> P >> Q;

    cout << P * I / (P + Q) << endl;

    return 0;
}
