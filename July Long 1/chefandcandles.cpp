#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int X,N;
        cin>>N>>X;
        if(X >= N)
        {
            cout<<0<<endl;
        }
        else
        {
            if((N-X) % 4 == 0)
            cout<<((N-X)/4)<<endl;

            else
            cout<<((N-X)/4) + 1<<endl;
        }
    }
    return 0;
}