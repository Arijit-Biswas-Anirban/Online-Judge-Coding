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
    int num;   in num;
    vtr a(num), b(num);
    int temp,mx=INT_MIN;
    For(i,num)
    {
        int a,b;    in a >> b;
        if(i==0)
        {
            temp = b;
            mx = max(mx,temp);
        }
        else
        {
            temp = temp - a + b;
            mx = max(mx,temp);
        }
    }
    pr mx nl;
    return 0;
}

/*
https://codeforces.com/problemset/problem/116/A
Input:
4
0 3
2 5
4 2
4 0

Output:
6

*/
