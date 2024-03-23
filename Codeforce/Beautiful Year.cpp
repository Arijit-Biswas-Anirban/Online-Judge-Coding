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
    int y,y2;
    in y;
    bool flag = true;

    while(flag)
    {
        y2 = y+1;
        string s = to_string(y2);

        set <int> uniDigits(s.begin(), s.end());
        if(s.size() == uniDigits.size())
        {
            flag = false;
        }
        else
            y++;
    }
    pr y2 nl;
    return 0;
}

