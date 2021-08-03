// B. Reverse Binary Strings
// "https://codeforces.com/contest/1437/problem/B"
// Easy | {1200}

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll findPair(string input, char find)
{
    ll N = input.size();
    ll ans = 0;
    for (ll i = 1; i < N; i++)
    {
        if (input[i] == find && input[i - 1] == find)
        {
            ans++;
        }
    }

    return ans;
}

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        string input;
        cin >> input;

        cout << max(findPair(input, '1'), findPair(input, '0')) << endl;
    }
    return 0;
}