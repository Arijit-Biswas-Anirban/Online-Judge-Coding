
/*
Find factorial of N where N: 1<= N <=100
find its modular M; where M = 47

*** A % M < M ***
*/

#include<bits/stdc++.h>
using namespace std;
int x = 1e9 + 7;
int main()
{
    int n;  cin>>n;
    int M = 47;

    long long fact = 1;
    for (size_t i = 2; i <= n; i++)
    {
        // fact = fact * i; // can not store value if n > 20
        // we use modular multiplication technique to solve it in modular M
        fact = (fact * i) % M;
    }
    cout<<fact<<endl;   // here fact = 30 & 21! = 21 * 47 + 30
    cout<<x<<endl;

    return 0;
}
