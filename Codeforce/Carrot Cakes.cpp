#include <iostream>

using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;


    int time_gap = (t+d) / t;
    int quantity = (time_gap * k);

    if (quantity < n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
