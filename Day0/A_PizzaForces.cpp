// A. PizzaForces
// "https://codeforces.com/contest/1555/problem/A"
// Easy {***}

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll input;
        cin >> input;

        input += ((input % 2) ? (1) : (0));

        ll ans = (double)(input) / (0.4);

        if (input < 6)
        {
            ans = 15;
        }

        cout << ans << endl;
    }
    return 0;
}
