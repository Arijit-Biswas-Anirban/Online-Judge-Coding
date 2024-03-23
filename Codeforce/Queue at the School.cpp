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
    int n, test;
    in n>>test;
    string a;
    in a;

    while(test--)
    {
        for(int i=1; i<n; i++)
        {
            if(a[i] == 'G' && a[i-1] == 'B')
            {
                swap(a[i], a[i-1]);
                i++;
            }
        }
    }

    pr a nl;
    return 0;
}

