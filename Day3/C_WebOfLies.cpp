// C. Web of Lies
// "https://codeforces.com/contest/1549/problem/C"
// Easy | Ticky

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
        ll N, M;
        cin >> N >> M;

        ll count[N];
        for (ll i = 0; i < N; i++)
        {
            count[i] = 0;
        }

        set<ll> ans;
        for (ll i = 0; i < M; i++)
        {
            ll start, end;
            cin >> start >> end;

            count[min(start, end)] += 1;
            ans.insert(min(start, end));
        }

        ll Q;
        cin >> Q;
        while (Q--)
        {
            ll type;
            cin >> type;
            if (type == 1)
            {
                ll start, end;
                cin >> start >> end;

                count[min(start, end)] += 1;
                ans.insert(min(start, end));
            }
            else if (type == 2)
            {
                ll start, end;
                cin >> start >> end;

                count[min(start, end)] -= 1;
                if (count[min(start, end)] == 0)
                {
                    set<ll>::iterator itr = ans.find(min(start, end));
                    ans.erase(itr);
                }
            }
            else
            {
                cout << N - ans.size() << endl;
            }
        }
    }
    return 0;
}
