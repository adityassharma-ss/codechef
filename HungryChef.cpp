#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(d/b>=c){
            cout <<"0 " << c << endl;
        }
        else if(d/a<c){
            cout << "-1" << endl;
            
        }
        else{
            int k = (d-(b*c))/(a-b);
            if((d-(b*c))%(a-b)!=0)
            k=k+1;
            cout << k <<" "<<c-k<< endl;
        }
        
        
    }
	// your code goes here
	return 0;
}
