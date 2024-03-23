#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;   cin>>s;
    stack<char> st;

    long long cnt=0;
    for(long long i=0; i<s.size(); i++){
        if((i+1 <= s.size()-1) && (s[i] == s[i+1])){
            i++;
            cnt++;
        }
        else {
            if(!st.empty() && s[i] == st.top()){
                cnt++;
                st.pop();
            }
            else    st.push(s[i]);
        }
    }
    if(cnt % 2 == 0)    cout<<"No";
    else    cout<<"Yes\n";

    return 0;
}