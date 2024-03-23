#include<bits/stdc++.h>
using namespace std;
int main()
{
    string given = {"qwertyuiopasdfghjkl;zxcvbnm,./"};
    char condition; cin>>condition;
    string input,output;
    cin.ignore();
    cin>>input;
    int len = input.size();
    for(int i=0; i<len; i++)
    {
        int check = given.find(input[i]);
        if(condition == 'R')
        {
            output+=given[check-1];
        }
        else
        {
            output+=given[check+1];
        }
    }
    cout<<output;
    return 0;
}
