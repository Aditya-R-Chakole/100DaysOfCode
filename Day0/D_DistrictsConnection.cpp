// D. Districts Connection
// "https://codeforces.com/problemset/problem/1433/D"
// Easy {1200}

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;

        vector<pair<ll, ll>> input(N);
        for (ll i = 0; i < N; i++)
        {
            ll temp;
            cin >> temp;

            input.push_back(make_pair(temp, i));
        }
        sort(input.begin(), input.end());

        if (input[0].first == input[N - 1].first)
        {
            cout << "NO" << endl;
            continue;
        }

        ll pos1 = 0;
        ll pos2 = 0;
        while (input[pos1].first == input[pos2].first)
        {
            pos2++;
        }

        vector<pair<ll, ll>> ans;
        for (int i = pos2; i < N; i++)
        {
            ans.push_back(make_pair(input[pos1].second + 1, input[i].second + 1));
        }
        for (int i = 1; i < pos2; i++)
        {
            ans.push_back(make_pair(input[i].second + 1, input[pos2].second + 1));
        }

        cout << "YES" << endl;
        for (ll i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    return 0;
}
