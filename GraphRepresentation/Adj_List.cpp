// Adjacency List is useful when I need to know which nodes are
// connected to a specific node.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e; // n = number of nodes, e = number of edges
    cin >> n >> e;

    // Create an adjacency list to store the graph
    vector<int> arr[n];

    // Read all edges
    while (e--)
    {
        int a, b; // Edge between node a and node b
        cin >> a >> b;
        arr[a].push_back(b); // Add edge to the adjacency list
        arr[b].push_back(a); // Add reverse edge for undirected graph
    }

    int x; // The node whose connections we want to print
    cin >> x;

    // Output the nodes connected to node x
    for (auto i : arr[x])
    {
        cout << i << " ";
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
// 0

// Expected Output:
// 1 4 3
