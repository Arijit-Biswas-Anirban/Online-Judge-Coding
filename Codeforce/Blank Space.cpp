#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int check=0,ans=0;
        int siz;
        cin>>siz;
        vector <int> arr(siz);
        vector <int> flag;
        for(int i=0; i<siz; i++)
            cin>>arr[i];
        for(int i=0; i<siz; i++)
        {
            if(arr[i] == 0)
                check = 1;
            if(arr[i] == 1)
                check = 0;

            if(check)
                ans++;
            else
            {
                flag.push_back(ans);
                ans = 0;
            }
            if(i == siz - 1)
                flag.push_back(ans);
        }
        sort (flag.begin(), flag.end());
//        for(int i=0; i<flag.size(); i++)
//                cout<<flag[i]<<" ";
        cout<<flag[flag.size() - 1]<<endl;
    }

    return 0;
}
/*
You are given a binary array a
 of n
 elements, a binary array is an array consisting only of 0
s and 1
s.

A blank space is a segment of consecutive elements consisting of only 0
s.

Your task is to find the length of the longest blank space.

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of the array.

The second line of each test case contains n
 space-separated integers ai
 (0≤ai≤1
) — the elements of the array.

Output
For each test case, output a single integer — the length of the longest blank space.

Example
inputCopy
5
5
1 0 0 1 0
4
0 1 1 1
1
0
3
1 1 1
9
1 0 0 0 1 0 0 0 1
outputCopy
2
1
1
0
3
*/
