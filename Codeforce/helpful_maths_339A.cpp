/*
Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

Input
The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

Output
Print the new sum that Xenia can count.

Examples
input
3+2+1
output
1+2+3
input
1+1+3+1+3
outputCopy
1+1+1+3+3
input
2
output
2

*/

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int i,j,count=0,arr[100];
    for(i=0,j=0; i<s.size(); i++)
    {
        if(s[i] == '+')
            continue;
        else
        {
            arr[j] = s[i] - '0';    // to get the int form of the string(1/2/3)
            count++;
            j++;
        }
    }
    sort(arr,arr+count);    // sorting array in ascending order
    for(i=0; i<count; i++)
    {
        cout<<arr[i];
        if(i == count-1)    // if string has only one input (1/2/3)
            break;
        cout<<'+';
    }

    return 0;
}
