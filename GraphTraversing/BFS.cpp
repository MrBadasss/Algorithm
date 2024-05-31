// Single source shortest path algorithm using BFS
// This code is not for weighted graphs

#include <bits/stdc++.h>
using namespace std;

// Define maximum number of nodes
vector<int> arr[1001]; // Adjacency list to store graph
bool vis[1001];        // Visited array to keep track of visited nodes
int level[1001];       // Level array to store the shortest path distance from source
vector<int> traversal; // Vector to store the order of BFS traversal

// BFS function to perform Breadth-First Search
void BFS(int src)
{
    queue<int> q;    // Queue to manage the BFS process
    q.push(src);     // Start BFS from the source node
    vis[src] = true; // Mark the source node as visited
    level[src] = 0;  // Level of source node is 0

    while (!q.empty())
    {                        // While there are nodes to process
        int par = q.front(); // Get the front node from the queue
        q.pop();             // Remove the front node from the queue

        traversal.push_back(par); // Add the node to the traversal order

        // Traverse all adjacent nodes
        for (int ch : arr[par])
        {
            if (!vis[ch])
            {                               // If the adjacent node is not visited
                q.push(ch);                 // Push it to the queue
                vis[ch] = true;             // Mark it as visited
                level[ch] = level[par] + 1; // Set the level (distance) of the adjacent node
            }
        }
    }
}

int main()
{
    int n, e; // n = number of nodes, e = number of edges
    cin >> n >> e;

    // Read all edges
    while (e--)
    {
        int a, b; // Edge between node a and node b
        cin >> a >> b;
        arr[a].push_back(b); // Add edge to the adjacency list
        arr[b].push_back(a); // Add reverse edge for undirected graph
    }

    // Initialize visited and level arrays
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int src; // Source node for BFS
    cin >> src;

    BFS(src); // Perform BFS from the source node

    // Output the BFS traversal order and levels
    for (int i : traversal)
    {
        cout << "Node: " << i << " Level: " << level[i] << endl;
    }
    cout << endl;

    return 0;
}

// Example Input:
// 7 8
// 0 1
// 1 2
// 0 4
// 1 3
// 2 0
// 3 4
// 1 5
// 3 6
// 0

// Expected Output:
// Node: 0 Level: 0
// Node: 1 Level: 1
// Node: 4 Level: 1
// Node: 2 Level: 1
// Node: 3 Level: 2
// Node: 5 Level: 2
// Node: 6 Level: 3
