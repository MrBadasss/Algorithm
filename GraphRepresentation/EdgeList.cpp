// Storing the edges as pairs

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e; // n = number of nodes, e = number of edges
    cin >> n >> e;

    // Create an array of pairs to store the edges
    pair<int, int> edgeList[e];

    // Read all edges and store them in the edgeList
    for (int i = 0; i < e; i++)
    {
        int a, b; // Edge between node a and node b
        cin >> a >> b;
        edgeList[i] = make_pair(a, b); // Store the edge as a pair
    }

    // Print all edges in the form "a -- b"
    for (const pair<int, int> &edge : edgeList)
    {
        cout << edge.first << " -- " << edge.second << endl;
    }

    return 0;
}

// Example Input:
// 6 6
// 0 1
// 1 5
// 0 4
// 0 3
// 3 4
// 2 4

// Expected Output:
// 0 -- 1
// 1 -- 5
// 0 -- 4
// 0 -- 3
// 3 -- 4
// 2 -- 4
