#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--){
      int x;
      cin >> x;
      int a;
      if(x%3!=0){
         a=x/3 +1;
         cout << a*3-x << endl;
      }
      else{
         cout << "0" << endl;
      }
      
   }
	// your code goes here
	return 0;
}
