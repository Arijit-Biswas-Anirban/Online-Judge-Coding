#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;    cin>>n>>t;

    if(n==1 && t!=10)
        cout<<t<<endl;
    else if(n>=2 && t!=10)
    {
        for(int i=1; i<=n; i++)
            cout<<t;
    }
    else if(n>=2 && t==10)
    {
        cout<<1;
        for(int i=1; i<n; i++)
            cout<<0;
    }
    else
        cout<<-1;
    return 0;
}

/*
Olesya loves numbers consisting of n digits, and Rodion only likes numbers that are divisible by t. Find some number that satisfies both of them.

Your task is: given the n and t print an integer strictly larger than zero consisting of n digits that is divisible by t. If such number doesn't exist, print  - 1.

Input
The single line contains two numbers, n and t (1 ≤ n ≤ 100, 2 ≤ t ≤ 10) — the length of the number and the number it should be divisible by.

Output
Print one such positive number without leading zeroes, — the answer to the problem, or  - 1, if such number doesn't exist. If there are multiple possible answers, you are allowed to print any of them.

Examples
inputCopy
3 2
outputCopy
712

*/
