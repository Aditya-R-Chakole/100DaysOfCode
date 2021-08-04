// B. Trouble Sort
// "https://codeforces.com/contest/1365/problem/B"
// Easy | {1200}

#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

bool isSorted(vector<ll> a, ll N)
{
    for (ll i = 1; i < N; i++)
    {
        if (!(a[i] >= a[i - 1]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;

        vector<ll> a(N);
        vector<ll> b(N);
        ll countZero = 0;
        ll countOne = 0;
        for (ll i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < N; i++)
        {
            cin >> b[i];

            countZero += ((b[i] == 0) ? (1) : (0));
            countOne += ((b[i] == 1) ? (1) : (0));
        }

        if (isSorted(a, N))
        {
            cout << "Yes" << endl;
        }
        else
        {
            if (countZero == N || countOne == N)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}