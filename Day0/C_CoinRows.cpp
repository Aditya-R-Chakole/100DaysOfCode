// C. Coin Rows
// "https://codeforces.com/contest/1555/problem/C"
// Easy {***}

#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;

        ll input[2][N];
        for (ll i = 0; i < 2; i++)
        {
            for (ll j = 0; j < N; j++)
            {
                cin >> input[i][j];
            }
        }

        input[0][0] = 0;
        input[1][N - 1] = 0;

        if (N == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else if (N == 2)
        {
            cout << min(input[0][1], input[1][0]) << endl;
            continue;
        }

        for (ll i = N - 2; i >= 0; i--)
        {
            input[0][i] = input[0][i] + input[0][i + 1];
        }
        for (ll i = 1; i < N; i++)
        {
            input[1][i] = input[1][i] + input[1][i - 1];
        }

        ll ans = INT_MAX;

        ans = min(input[0][1], input[1][N - 2]);
        for (ll i = 1; i < N - 1; i++)
        {
            ans = min(ans, max(input[0][i + 1], input[1][i - 1]));
        }

        cout << ans << endl;
    }
    return 0;
}
