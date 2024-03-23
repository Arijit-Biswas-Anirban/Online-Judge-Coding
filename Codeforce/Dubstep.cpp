//WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
#include<bits/stdc++.h>
#define ll long long
#define For(i,n) for(int i=0; i<n; i++)
#define in cin>>
#define srt(a) a.begin(), a.end()
#define vtr vector<int>
#define pr cout<<
#define nl <<endl
#define get(x) getline (cin, x)
using namespace std;

int main() {
    string input;
    get(input);
    input = regex_replace(input, regex("WUB+"), " ");
    input = regex_replace(input, regex(" +"), " ");
    input = regex_replace(input, regex("^ +| +$"), "");
    pr input nl;

    return 0;
}
