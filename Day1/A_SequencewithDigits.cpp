// A. Sequence with Digits
// "https://codeforces.com/problemset/problem/1355/A"
// Easy {1200} | But little Ticky

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll findProduct(ll n)
{
    ll MIN = INT_MAX;
    ll MAX = INT_MIN;
    while (n)
    {
        ll temp = n % 10;
        MAX = max(MAX, temp);
        MIN = min(MIN, temp);

        n /= 10;
    }

    return MAX * MIN;
}

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;

        ll ans = INT_MIN;
        while (--k)
        {
            if (findProduct(n) == 0)
            {
                break;
            }
            n = n + findProduct(n);
            //cout << n << " |#| " << findProduct(n) << endl;
        }

        cout << n << endl;
    }
    return 0;
}
