// A. Common Prefixes
// "https://codeforces.com/contest/1384/problem/A"
// Easy | {1200}

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string templateStart = "";
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = i + 1; j <= 'z'; j++)
        {
            templateStart = templateStart + i + j;
        }
    }
    //cout<<templateStart<<endl;

    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;

        vector<ll> input(N);
        for (ll i = 0; i < N; i++)
        {
            cin >> input[i];
        }

        vector<string> ans(N + 1);
        ans[0] = templateStart.substr(0, 200);
        //cout<<" |#| "<<ans[0]<<endl;
        for (ll i = 0; i < N; i++)
        {
            char chage = (char)((ll)(ans[i][input[i]]) + 1);
            if (chage == '{')
            {
                chage = chage - 26;
            }
            //cout<<i<<" |#| "<<chage<<" = "<<(ll)(ans[i][input[i]]-'a')<<" - "<<( (ll)(ans[i][input[i]]-'a') + 1 )<<endl;
            ans[i + 1] = (ans[i].substr(0, input[i]) + chage + ans[i].substr(input[i] + 1, 200 - input[i] - 1));
        }

        for (ll i = 0; i <= N; i++)
        {
            cout << ans[i] << endl;
        }
    }
    return 0;
}