// C. Ternary XOR
// "https://codeforces.com/contest/1328/problem/C"
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
        ll N;
        cin >> N;

        string input;
        cin >> input;

        string ans1;
        string ans2;
        ll smaller = -1; // Showing the smaller number
        for (ll i = 0; i < N; i++)
        {
            if (smaller == -1)
            {
                if (input[i] == '2')
                {
                    //cout<<" ||##|| "<<2<<endl;
                    ans1 = ans1 + '1';
                    ans2 = ans2 + '1';
                }
                else if (input[i] == '0')
                {
                    ans1 = ans1 + '0';
                    ans2 = ans2 + '0';
                }
                else
                {
                    ans1 = ans1 + '1';
                    ans2 = ans2 + '0';
                    smaller = 2;
                }
            }
            else
            {
                if (input[i] == '2')
                {
                    ans1 = ans1 + '0';
                    ans2 = ans2 + '2';
                }
                else if (input[i] == '0')
                {
                    ans1 = ans1 + '0';
                    ans2 = ans2 + '0';
                }
                else
                {
                    ans1 = ans1 + '0';
                    ans2 = ans2 + '1';
                }
            }
        }

        cout << ans1 << endl;
        cout << ans2 << endl;
    }
    return 0;
}