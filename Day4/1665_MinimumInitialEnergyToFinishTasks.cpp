// 1665. Minimum Initial Energy to Finish Tasks
// "https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/"
// Hard | Greedy

static bool cmp(const pair<int, int> a, const pair<int, int> b)
{
    return (a.first - a.second) > (b.first - b.second);
}

int minimumEffort(vector<vector<int>> &a)
{
    int n = a.size();
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
        vp.push_back({a[i][1], a[i][0]});
    sort(vp.begin(), vp.end(), cmp);
    for (int i = n - 2; i >= 0; i--)
        vp[i].second += vp[i + 1].second;
    int ans = vp[0].first, go;
    go = ans;
    for (int i = 0; i < n; i++)
    {
        if (go < vp[i].first)
        {
            ans += (vp[i].first - go);
            go = vp[i].first;
        }
        if (i < n - 1)
            go -= (vp[i].second - vp[i + 1].second);
    }
    return ans;
}