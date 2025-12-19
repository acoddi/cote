#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<bool>> visited;
queue<pair<int, int>> q;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int n, m, cnt;

void bfs(int stax, int stay)
{
    q.push({stax, stay});
    visited[stax][stay] = true;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if (nx < 0 || nx > n || ny < 0 || ny > n)
                continue;
            if (visited[nx][ny] != true)
            {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    visited.resize(n + 1, vector<bool>(n + 1));
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        visited[a][b] = true;
        visited[b][a] = true;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!visited[i][j])
            {
                bfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}