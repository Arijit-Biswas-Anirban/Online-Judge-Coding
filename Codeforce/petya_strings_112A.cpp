/*
outputstandard output
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
input
aaaa
aaaA
output
0
input
abs
Abz
output
-1
input
abcdefg
AbCdEfF
output
1

*/

#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int check;
    string str1, str2;
    cin>>str1>>str2;

    for(int i=0; str1[i]!='\0'; i++)
    {
        transform(str1.begin(), str1.end(), str1.begin(),::toupper);
        transform(str2.begin(), str2.end(), str2.begin(),::toupper);
        if(str1[i]==str2[i])
        {
            check=0;
        }
        else if(str1[i]>str2[i])
        {
            check=1;
            break;
        }
        else
        {
            check=-1;
            break;
        }
    }
    cout<<check<<endl;
    return 0;
}
