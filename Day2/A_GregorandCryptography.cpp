// A.GregorandCryptography
// "https://codeforces.com/contest/1549/problem/A"
//

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll P;
        cin >> P;

        if (P % 2 == 0)
        {
            cout << 2 << " " << P << endl;
        }
        else
        {
            cout << 2 << " " << P - 1 << endl;
        }
    }

    return 0;
}