#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector <ll> vec;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    for(ll i=0; i<n; i++)
    {
        ll mn=min(abs(vec[i]-vec[i+1]),abs(vec[i]-vec[i-1]));
        ll mx=max(abs(vec[i]-vec[0]),abs(vec[i]-vec[n-1]));
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}
