#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
       if(A>B && A>C)
       {
        cout<<"Alice"<<endl;
       }
       if(B>A && B>C)
       {
        cout<<"Bob"<<endl;
       }
       if(C>A && C>B)
       {
        cout<<"Charlie"<<endl;
       }

    }
    return 0;
}