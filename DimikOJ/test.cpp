#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
}
int main() {
    int tc; cin>>tc; while(tc--){
    int num; cin >> num;
    if (num < 0) return 1;
    else cout << factorial(num)<<endl;
    }
    return 0;
}
