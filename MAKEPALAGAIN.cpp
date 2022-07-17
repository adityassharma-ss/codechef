#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--){
      ll n;
      cin >> n;
      string str;
      cin >> str;
      unordered_map<char, ll> mp1;
      unordered_map<char, ll> mp2;
      for (ll i = 0; i < n; i++){
       if (i == 0 || i % 2 == 0){
        mp1[str[i]]++;
    }
    else
    {
        mp2[str[i]]++;
    }
}
if (mp1 == mp2)
{
    cout << "YES" << endl;
}
else
{
    cout << "NO" << endl;
}
   }
	// your code goes here
	return 0;
}
