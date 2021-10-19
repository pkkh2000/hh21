#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, a, b, res = 0;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    vector<int> adj_lst[n + 1]; //array of vector
    vector<int> cnt(n + 1, 0);  // simple vector
    queue<int> q;
    vector<int> dele(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;
        adj_lst[a].push_back(b);
        adj_lst[b].push_back(a);
        cnt[a]++;
        cnt[b]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == 1)
        {
            q.push(i);
            dele[i] = 1;
        }
    }
    int x;
    for (int i = 2; i <= k && !q.empty(); i++)
    {
        x = q.size();
        while (x--)
        {
            int temp = q.front();
            q.pop();
            for (auto it : adj_lst[temp])
            {
                cnt[it]--;
                if (cnt[it] == 1)
                {
                    q.push(it);
                    dele[it] = 1;
                }
            }
        }
    }
    for (auto it : dele)
        if (it == 0)
            res++;
    cout << res - 1 << endl;
}
int main()
{
    w(t)
    {
        solve();
    }
}
