// This representation is useful when I only need to know
// if there is any connection between nodes x and y.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e; // n = number of nodes, e = number of edges
    cin >> n >> e;

    // Create an adjacency matrix to store the graph
    int mat[n][n];

    // Initialize the matrix with -1 to indicate no connection
    memset(mat, -1, sizeof(mat));

    // Read all edges and update the adjacency matrix
    while (e--)
    {
        int a, b; // Edge between node a and node b
        cin >> a >> b;
        mat[a][b] = 1; // Mark connection from a to b
        mat[b][a] = 1; // Mark connection from b to a (since the graph is undirected)
    }

    // Print the adjacency matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
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
// 0 1 0 1 1 0
// 1 0 0 0 0 1
// 0 0 0 0 1 0
// 1 0 0 0 1 0
// 1 0 1 1 0 0
// 0 1 0 0 0 0
