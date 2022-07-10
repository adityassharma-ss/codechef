#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      int a[n];
      int odd=0;
      int mini= INT_MAX;
      for(int i=0;i<n;i++){
         cin >> a[i];
         if(a[i]&1){
            odd++;
         }
         if(mini>=a[i]){
            mini=a[i];
         }
         
      }
      if(mini==1){
         cout << "CHEF" << endl;
      }
      else if(odd%2==0){
         cout << "CHEFINA" << endl;
      }
      else{
         cout << "CHEF" << endl;
      }
      
   }
	// your code goes here
	return 0;
}
