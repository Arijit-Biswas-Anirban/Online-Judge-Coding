#include<bits/stdc++.h>
#define ll long long
#define For(i,n) for(int i=0; i<n; i++)
#define in cin>>
#define srt(a) a.begin(), a.end()
#define vtr vector<int>
#define pr cout<<
#define nl <<endl
using namespace std;
int main()
{
    int n,m,flag=0;
    in n>>m;
    char arr[n][m];

    For(i,n)
    {
        For(j,m)
        {
            in arr[i][j];
            if(arr[i][j] != 'W' && arr[i][j] != 'B' && arr[i][j] != 'G')
            {
                flag = 1;
                break;
            }

        }
    }

    if(flag)
        pr "#Color" nl;
    else
        pr "#Black&White" nl;

    return 0;
}

/*
https://codeforces.com/contest/707/problem/A

2 2
C M
Y Y

#Color

3 2
W W
W W
B B

#Black&White
*/
