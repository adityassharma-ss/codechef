#include<bits/stdc++.h>
#define input(x) for(auto &it:x){cin>>it;}
#define output(x) for(auto it:x){cout<<it<<" ";}
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve(){
    ll n;
    cin>>n;
    if(n<=3){
        cout<<-1;
        return;
    }
    for (int i = n; i > 4; i--)
    {
        cout<<i<<" ";
    }
    cout<<1<<" "<<2<<" "<<4<<" "<<3;
}

int main(){
    fast
    ll tc=1;
    cin>>tc;
    while(tc--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
