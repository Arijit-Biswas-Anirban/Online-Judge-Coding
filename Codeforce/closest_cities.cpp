#include<bits/stdc++.h>
#define ll long long
#define For(i,a,n) for(int i=a; i<n; i++)
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;

const int N = 1e7+7;

void forward_check(vtr &anu, vtr &himu){
    anu[0] = 0;
    anu[1] = 1;
    for(int i=1; i<anu.size() - 1; i++){
        if(himu[i] - himu[i-1] > himu[i+1] - himu[i]){
            anu[i+1] = anu[i] + 1;
        }
        else{
            anu[i+1] = anu[i] + (himu[i+1] - himu[i]);
        }
    }
    // for(int i=0; i<anu.size(); i++) cout<<anu[i]<<" ";
    // pr endl;
}

void backward_check(vtr &anu, vtr &himu){
    reverse(himu.begin(), himu.end());
    anu[0] = 0;
    anu[1] = 1;
    for(int i=1; i<anu.size() - 1; i++){
        if(abs(himu[i] - himu[i-1]) > abs(himu[i+1] - himu[i])){
            anu[i+1] = anu[i] + 1;
        }
        else{
            anu[i+1] = anu[i] + abs(himu[i+1] - himu[i]);
        }
    }
    reverse(anu.begin(), anu.end());
    // for(int i=0; i<anu.size(); i++) cout<<anu[i]<<" ";
    // pr endl;

}

void anuhimu(){
    ll n;  in n;
    vtr vec(n);
    for(int i=0; i<n; i++){
        in vec[i];
    }
    vtr for_vec = vec;
    forward_check(for_vec, vec);
    vtr back_vec = vec;
    backward_check(back_vec, vec);

    int m, a, b;
    in m;
    while (m--)
    {
        in a >> b;
        if(a<b)  pr for_vec[b-1] - for_vec[a-1] nl
        else pr back_vec[b-1] - back_vec[a-1] nl
    }
    
}
int main(){
ll tc;
in tc;
while(tc--){
    anuhimu();
}


return 0;
}