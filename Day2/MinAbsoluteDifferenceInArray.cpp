// Minimum Difference between any two elements
// "https://www.geeksforgeeks.org/find-minimum-difference-pair/"
// Greedy Problem

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll find_ans(ll arr[], ll n)
{
    sort(arr, arr + n);

    ll ans = INT_MAX;
    for (ll i = 1; i < n; i++)
    {
        ans = min(ans, abs(arr[i] - arr[i - 1]));
    }

    return ans;
}

int main()
{
    ll size;
    cin >> size;

    ll arr[size];
    for (ll i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    ll ans = find_ans(arr, size);
    cout << ans << endl;

    return 0;
}