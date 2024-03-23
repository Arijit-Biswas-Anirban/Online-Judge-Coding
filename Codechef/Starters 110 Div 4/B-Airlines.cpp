#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void solve() {
    int X, N;
    cin >> X >> N;

    int planes_needed = ceil((double)N / 100.0);
    int planes_to_buy = max(0, planes_needed - X);

    cout << planes_to_buy << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
