#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while(testCase--) {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    for(int i = 0 ; i < n ; i++) {
        cin >> b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    vector<int> c;
    // for(int i = 0 ; i < n ; i++) {
    //     c.push_back(a[i]+b[n-i-1]);
    // }
    // for(int i = 0 ; i < n ; i++) {
    //     c.push_back(a[i]+b[i]);
    // }

    // for(int i = 0 ; i < n ; i++) {
    //     cout << a[i] << " ";
    // }
    // cout<< "\n";
    // for(int i = 0 ; i < n ; i++) {
    //     cout << b[i] << " ";
    // }
    // cout<< "\n";

    if(n == 1) {
        cout << a[0]+b[0] << "\n";
        continue;
    }

    // c.push_back(a[n/2+1]+b[n/2+1]);
    // if((n/2)%2 == 0) {
        for(int i = 0 ; i < n/2 ; i++) {
            c.push_back(a[i]+b[i]);
        }
            // c.push_back(a[n/2]+b[n/2+2]);
            // c.push_back(a[n/2+2]+b[n/2]);
        int temp = n-1;
        for(int i = n/2 ; i < n ; i++) {
            c.push_back(a[i]+b[temp--]);
        }
    // }
    // else {
    //     for(int i = 0 ; i <= n/2 ; i+=2) {
    //         c.push_back(a[i]+b[i+1]);
    //         c.push_back(a[i+1]+b[i]);
    //     }
    //     for(int i = n/2+2 ; i < n ; i+=2) {
    //         c.push_back(a[i]+b[i+1]);
    //         c.push_back(a[i+1]+b[i]);
    //     }
    // }

    sort(c.begin(),c.end());
    cout << c[n/2] << "\n";


    }
    return 0;
}
