#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--){
      int x1,y1,x2,y2;
      cin >> x1 >> y1 >> x2 >> y2;
      
      if((abs(x1-x2)%2==0 && abs(y1-y2)%2 == 0) || (abs(x1-x2)%2!=0 && abs(y1-y2)%2!=0)){
      cout << "YES" << endl;
         
      }
      else{ cout << "NO" << endl;
   }
      
   }
	// your code goes here
	return 0;
}
