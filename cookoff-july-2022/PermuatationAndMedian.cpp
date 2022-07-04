#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> vec;
	    int x = n;
	    int mn = 1;
	    for(int i =0; i < n; i++){
	        if(i%2==0){
	            cout<< x-- << " ";
	           
	        }
	        else{
	            cout<< mn++ << " ";
	        }
	    }
	    cout << "\n";
	}
	return 0;
}
