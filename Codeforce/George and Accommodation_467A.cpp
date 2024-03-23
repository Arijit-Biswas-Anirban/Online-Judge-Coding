#include <bits/stdc++.h>
using namespace std;

int main()
{
    int room;
    cin>>room;
    int count = 0,flag;
    while(room--)
    {
        int p,q;    cin>>p>>q;
        flag = 0;
        if(q-p >= 2)    flag = 1;
        if(flag) count++;
    }
    cout<<count<<endl;
    return 0;
}
