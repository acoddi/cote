#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, m;

vector<vector<int>> arr;
vector<vector<int>> dist;

void bfs(int a, int b)
{
    queue<pair<int, int>> vist;
    vist.push({a, b});
    dist[a][b] = 0;

    while (!vist.empty())
    {
        int x, y;
        x = vist.front().first;
        y = vist.front().second;
        vist.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx, ny;
            nx = dx[i] + x;
            ny = dy[i] + y;

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;

            if (arr[nx][ny] != 0 && dist[nx][ny] == -1)
            {
                dist[nx][ny] = dist[x][y] + 1;
                vist.push({nx, ny});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    arr.assign(n, vector<int>(m, 0));
    dist.assign(n, vector<int>(m, -1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int num;
            cin >> num;
            arr[i][j] = num;
        }
    }

    int sx, sy;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 2)
            {
                bfs(i, j);
            }
            if (arr[i][j] == 0)
                dist[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
}