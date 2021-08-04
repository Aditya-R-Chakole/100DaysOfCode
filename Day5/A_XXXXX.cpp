// A. XXXXX
// "https://codeforces.com/contest/1364/problem/A"
// Easy | {1200}

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N, X;
        cin >> N >> X;

        vector<ll> input(N);
        queue<ll> nonDiv;
        ll sum = 0;
        for (ll i = 0; i < N; i++)
        {
            cin >> input[i];
            sum += input[i];
            if (input[i] % X != 0)
            {
                nonDiv.push(i);
            }
        }

        if (sum % X != 0)
        {
            cout << N << endl;
        }
        else
        {
            if (nonDiv.size() == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                ll firstNonDiv = nonDiv.front();
                ll lastNonDiv = nonDiv.back();

                //cout<<firstNonDiv<<" |#| "<<lastNonDiv<<endl;
                cout << max(N - firstNonDiv - 1, lastNonDiv) << endl;
            }
        }
    }
    return 0;
}