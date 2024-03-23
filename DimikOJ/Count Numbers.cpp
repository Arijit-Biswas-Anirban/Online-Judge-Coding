#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    getline(cin, s);
    int count=0;
    for(int i=0; i<s.size(); i++)
        if(s[i] == ' ')
            if (i + 1 < s.size() && s[i + 1] != ' ')
                count++;
    cout<<count+1<<endl;
}
int main() {
    int tc;    cin>>tc;
    cin.ignore();
    while(tc--)
       solve();
    return 0;
}
