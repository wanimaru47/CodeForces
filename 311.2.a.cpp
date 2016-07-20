/***********************************
 *
 * Codeforces Round #311 (Div. 2)
 * A. Ilya and Diplomas
 *
 ***********************************/
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int min1, min2, min3, max1, max2, max3;
    cin >> min1 >> max1 >> min2 >> max2 >> min3 >> max3;

    int sub = n - (min2 + min3);
    if (min1 <= sub && sub <= max1) {
        cout << sub << " " << min2 << " " << min3 << endl;
    } else {
        sub = n - min3 - max1;
        if (min2 <= sub && sub <= max2) {
            cout << max1 << " " << sub << " " << min3 << endl;
        } else {
            sub = n - max2 - max1;
            cout << max1 << " " << max2 << " " << sub << endl;
        }
    }

    return 0;
}
