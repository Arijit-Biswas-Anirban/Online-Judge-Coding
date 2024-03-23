#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int test,flag=0;
    cin>>test;

    while(test--)
    {
        int num;
        cin>>num;
        if(num == 1)
            flag=1;
    }

    if(flag)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

    return 0;
}
