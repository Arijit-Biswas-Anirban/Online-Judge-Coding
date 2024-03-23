/*
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
input
ApPLe
output
ApPLe
input
konjac
output
Konjac
*/

#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;

    if(s[0]>=97 && s[0]<=122)
    {
        s[0]-=32;
    }

    cout<<s<<endl;

    return 0;
}
