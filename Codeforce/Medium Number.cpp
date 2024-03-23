#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;   cin>>test;

    while(test--)
    {
       vector <int> vec(3);
       for(int i=0; i<3; i++)
       {
           cin>>vec[i];
       }
       sort (vec.begin(), vec.end());
       cout<<vec[1]<<endl;
    }

    return 0;
}
