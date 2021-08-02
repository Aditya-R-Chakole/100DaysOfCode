// Ehab Is an Odd Person
// "https://codeforces.com/problemset/problem/1174/B"
// Easy | {1200}

#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

int main()
{
    ll T = 1;
    //cin>>T;
    while (T--)
    {
        ll N;
        cin >> N;

        ll input[N];
        ll countEven = 0;
        ll countOdd = 0;
        for (ll i = 0; i < N; i++)
        {
            cin >> input[i];

            countEven += ((input[i] % 2 == 0) ? (1) : (0));
            countOdd += ((input[i] % 2 == 1) ? (1) : (0));
        }

        if (!(countEven == N || countOdd == N))
        {
            sort(input, input + N);
        }

        for (ll i = 0; i < N; i++)
        {
            cout << input[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
