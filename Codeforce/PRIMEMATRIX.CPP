#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>vis(100010,0);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=2;i*i<=100010;i++)
    {
        if(!vis[i])
        {
            for(int j=i*i;j<=100010;j+=i)
            {
                vis[j]=1;
            }
        }
    }
    vector<int>primes;
    for(int i=2;i<=100010;i++)
    {
        if(!vis[i])
        {
            primes.push_back(i);
        }
    }
    for(int i=0;i<14;i++)
    {
        cout<<primes[i]<<" ";
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=0;j<m;j++)
        {
            int p=arr[i][j];
            int it = lower_bound(primes.begin(),primes.end(),p)-primes.begin();
            if(it!=primes.size())
            {
                temp+=(primes[it]-p);
            }
        }
        ans=min(temp,ans);
    }
    for(int i=0;i<m;i++)
    {
        int temp=0;
        for(int j=0;j<n;j++)
        {
            int p=arr[j][i];
            int it = lower_bound(primes.begin(),primes.end(),p)-primes.begin();
            if(it!=primes.size())
            {
                temp+=(primes[it]-p);
            }
        }
        ans=min(temp,ans);
    }
    cout<<ans<<endl;




}
