// This representation is useful when I only need to know
// if there is any connection between nodes x and y.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, -1, sizeof(mat));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }

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
// input:
// 6 6
// 0 1
// 1 5
// 0 4
// 0 3
// 3 4
// 2 4
