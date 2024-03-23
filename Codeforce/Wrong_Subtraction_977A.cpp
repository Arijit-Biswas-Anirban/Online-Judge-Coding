#include<iostream>
using namespace std;
int main()
{
    int num,term,temp;
    cin>>num>>term;

    while(term--)
    {
        temp = num%10;
        if(temp != 0)
            num -= 1;
        else
            num /= 10;
    }
    cout<<num<<endl;
    return 0;
}
