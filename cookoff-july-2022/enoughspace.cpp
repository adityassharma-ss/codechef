#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--){
      int x,y,z;
      cin >> x >> y >> z;

      if(x>=y+z*2){
         cout << "YES" << endl;
      }
      else{
         cout << "NO" << endl;
      }
   }
    // your code goes here
    return 0;
}
