#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector <int> vec(n);
        for(int i=0; i<n; i++)
            cin>>vec[i];
        sort(vec.begin(), vec.end());
        int ans = 0;
        for(int i=1; i<n; i++)
        {
            ans += vec[i] - vec[i-1];
        }
        cout<<ans<<endl;
    }


    return 0;
}

