#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--){
      int x,y,z;
      cin >> x >> y >> z;
      int c=x/y;
      if(x%y==0){
         cout << c*z << endl;
      }else{
         cout << (c+1)*z << endl;
      }
   }
	// your code goes here
	return 0;
}
