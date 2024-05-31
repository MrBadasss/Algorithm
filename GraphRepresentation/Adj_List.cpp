// Ajacecny List is usefull when I need to know which nodes are
// connected to a specific node.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> arr[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int x;
    cin >> x;
    for (auto i : arr[x])
    {
        cout << i << " ";
    }

    return 0;
}
// input:
// 6 6
// 0 1
// 1 5
// 0 4
// 0 3
// 3 4
// 2 4
// 0