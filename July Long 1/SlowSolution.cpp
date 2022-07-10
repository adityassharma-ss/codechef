#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--){
      int maxT,maxN,sumN;
      cin >> maxT >> maxN >> sumN;
      long long ans=0;
      
      for(long long i=maxN;i>=1;i--){
         int count = (sumN/i)+(sumN%i>0?1:0);
         if(count<=maxT){
            long long ans2=(sumN/i)*pow(i,2)+pow(sumN%i,2);
            ans=max(ans,ans2);
            
         }
         else{
            ans=max(ans,maxT*i*i);
         }
         
      }
      cout << ans << endl;
   }
	// your code goes here
	return 0;
}
