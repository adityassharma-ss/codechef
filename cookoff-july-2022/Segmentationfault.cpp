#include<bits/stdc++.h>
using namespace std;

#define ll long long int
// const int N=1e5+10;
    int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int k=1;
        int j=n;
int freq[n+1]={0};
int chk[n+1]={0};
    while(k<=n)
    {
        int l,r;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            freq[i]++;
            if(i==k){
                chk[k]=1;
            }
        }
        k++;
    };


    vector<int> v;
    for(int i=1;i<=j;i++){
        if(freq[i]==j-1 && chk[i]==0){
            v.push_back(i);
        }
    }
    cout<<v.size()<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
    return 0;
}
