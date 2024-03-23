#include<bits/stdc++.h>
#define ll long long
#define srt(a) a.begin(), a.end()
#define vtr vector<int>
#define p cout<<
#define nl <<endl
using namespace std;
int main()
{
    ll test;
    cin>>test;

    while(test--)
    {
        ll n;
        cin>>n;
        vtr a(n),b(n);
        ll sum=0,sum1=0;
        for(ll i=0; i<n; i++)
            cin>>a[i];
        for(ll i=0; i<n; i++)
            cin>>b[i];

        sort (srt(a));
        sort (srt(b));

        ll check = a[0];
        ll check2 = b[0];

        for(ll i=0; i<n; i++)
        {
            sum += check + b[i];
            sum1 += check2 + a[i];
        }
        p min(sum,sum1) nl;
    }
    return 0;
}

/*
https://codeforces.com/contest/1879/problem/B
Input:
4
3
1 4 1
3 2 2
1
4
5
2
4 5
2 3
5
5 2 4 5 3
3 4 2 1 5
Output:
10
9
13
24
*/
