// B. Equal Rectangles
// "https://codeforces.com/problemset/problem/1203/B"
// Easy

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

        N = 4 * N;
        ll input[N];
        for (ll i = 0; i < N; i++)
        {
            cin >> input[i];
        }
        sort(input, input + N);

        ll area = input[0] * input[N - 1];
        bool ok = true;
        N /= 4;
        for (ll i = 0; i < N; i++)
        {
            ll start = 2 * i;
            ll end = 4 * N - (i * 2) - 1;
            if (input[start] != input[start + 1] || input[end] != input[end - 1] || input[start] * input[end] != area)
            {
                ok = false;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
