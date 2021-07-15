// "https : //codeforces.com/problemset/problem/579/A"
// Just a try question
// Very Easy {1000}

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll findSetOnes(ll input)
{
    ll countOnes = 0;
    while (input)
    {
        if (input % 2 == 1)
        {
            countOnes++;
        }

        input /= 2;
    }

    return countOnes;
}

int main()
{
    ll input;
    cin >> input;

    cout << findSetOnes(input) << endl;

    return 0;
}
