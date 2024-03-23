#include<bits/stdc++.h>
#define ll long long
#define For(i,n) for(int i=0; i<n; i++)
#define For1(i,n) for(int i=1; i<n; i++)
#define in cin>>
#define srt(a) a.begin(), a.end()
#define vtr vector<int>
#define pr cout<<
#define nl <<endl
using namespace std;
int main()
{
    int test;   cin>>test;
    while(test--)
    {
        int n,flag=1;  cin>>n;
        vtr s(n), e(n);
        For(i,n)
        {
            in s[i];
            in e[i];
        }
        int w = s[0];
        For1(i,n)
        {
            if(s[i] >= s[0] && e[i] >= e[0])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            pr w nl;
        else
            pr -1 nl;
    }
    return 0;
}

/*
https://codeforces.com/contest/1879/problem/A
Input:
3
4
7 4
9 3
4 6
2 2
2
4 6
100 100
2
1337 3
1337 3
Output:
5
-1
-1
*/
