#include <bits/stdc++.h>
using namespace std;

vector<int> arr[1001];
bool vis[1001];
int level[1001];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int ch : arr[par])
        {
            if (!vis[ch])
            {
                vis[ch] = true;
                level[ch] = level[par] + 1;
                q.push(ch);
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int src, des;
        cin >> src >> des;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        BFS(src);

        cout << level[des] << endl;
    }

    return 0;
}