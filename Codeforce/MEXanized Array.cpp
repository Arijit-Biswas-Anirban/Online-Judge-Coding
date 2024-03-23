#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        int sum=0,count=0;
        if(k > n)
            cout<<-1<<endl;
        else
        {
            if(k-1 <= x)
            {
                sum = ( (k-1) * (k-1+1) ) / 2;
                if(k==x)
                    sum +=  (n-k) * (x-1);
                else
                    sum += (n-k) * x;
                cout<<sum<<endl;
            }
            else
                cout<<-1<<endl;
        }
    }

    return 0;
}
