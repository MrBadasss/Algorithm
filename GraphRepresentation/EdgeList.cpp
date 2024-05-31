// Storing the edges as pair
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    pair<int, int> edgeList[e];

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        edgeList[i].first = a;
        edgeList[i].second = b;
    }

    for (pair<int, int> i : edgeList)
    {
        cout << i.first << " -- " << i.second << endl;
    }

    return 0;
}

// Input:
// 6 6
// 0 1
// 1 5
// 0 4
// 0 3
// 3 4
// 2 4
// Output:
// 0 -- 1
// 1 -- 5
// 0 -- 4
// 0 -- 3
// 3 -- 4
// 2 -- 4
