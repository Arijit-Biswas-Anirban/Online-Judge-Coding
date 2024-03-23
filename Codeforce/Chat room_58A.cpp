#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, flag ="hello";
    cin>>s;
    int flaag = 0;
    for(int i=0,j=0; i<s.length(); i++)
    {
        if(s[i]==flag[j])
        {
            j++;
            flaag++;
        }
    }
    if(flaag==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
