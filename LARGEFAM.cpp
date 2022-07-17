#include <bits/stdc++.h>
#define ll long long
using namespace std;

void large()
{
    ll m2 = 1, n;
    if (m2 != 1)
    {
        ll ji = 0;
    }
    else
    {
        cin >> n;
    }
    vector<ll> x;
    ll z = 0;
    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        if (y == 0)
            z++;
        else
            x.push_back(y);
    }

    sort(x.begin(), x.end());
    for (ll i = 0; i < z; i++)
        x.push_back(0);

    ll o = 0, p = 1;
    for (ll i = 0; i < n; i++)
    {
        int f = 1;
        for (ll k = 0; k < x[i]; k++)
        {
            if (p < n)
                p++;
            else
            {
                f = 0;
                break;
            }
        }
        o += f;
    }
    cout << o << endl;
}

int main()
{

    ll test;
    cin >> test;
    while (test--)
    {
        large();
    }
    return 0;
}
