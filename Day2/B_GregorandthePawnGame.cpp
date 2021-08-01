// B. Gregor and the Pawn Game
// "https://codeforces.com/contest/1549/problem/B"
//

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

        string enemy;
        string my;
        cin >> enemy;
        cin >> my;

        ll ans = 0;
        for (ll i = 0; i < N; i++)
        {
            if (my[i] == '1')
            {
                if (enemy[i] == '0')
                {
                    ans++;
                    enemy[i] = '#';
                    my[i] = '0';
                }
                else if (i - 1 >= 0 && enemy[i - 1] == '1')
                {
                    ans++;
                    //cout<<" |#| "<<i<<endl;
                    enemy[i - 1] = '#';
                    my[i] = '0';
                }
                else if (i + 1 < N && enemy[i + 1] == '1')
                {
                    ans++;
                    //cout<<" |!!| "<<i<<endl;
                    enemy[i + 1] = '#';
                    my[i] = '0';
                }
            }

            //cout<<i<<" ENEMy "<<enemy<<endl;
            //cout<<i<<" My "<<my<<endl;
        }
        cout << ans << endl;
    }
    return 0;
}