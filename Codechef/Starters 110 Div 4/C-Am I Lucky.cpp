#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int tot,boy,grp,girl;
    cin>>tot>>boy>>grp; girl = tot - boy;

    int hiking = 0;
    hiking += boy / grp + girl / grp;
    //cout<<hiking<<endl;
    boy = (boy % grp);   girl = (girl % grp);
    //cout<<boy<<" "<<girl<<endl;
    int dancing = 0;
    dancing += min(boy,girl);
    //cout<<dancing<<endl;
    boy -= dancing;     girl -= dancing;
    //cout<<boy<<" "<<girl<<endl;;
    int reading = max(boy,girl);
    cout<<reading<<endl;
}

int main()
{
    int tc; cin>>tc;
    while(tc--) solve();
    return 0;
}
