#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m, cnt;
queue<int> q;
vector<bool> visited;
vector<vector<int>> adj;

void bfs(int start)
{
  q.push(start);
  visited[start] = true;
  while (!q.empty())
  {
    int v = q.front();
    q.pop();
    for (int next : adj[v])
    {
      if (!visited[next])
      {
        visited[next] = true;
        q.push(next);
      }
    }
  }
}
int main()
{
  cin >> n >> m;
  visited.resize(n + 1);
  fill(visited.begin(), visited.end(), false);

  adj.resize(n + 1);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  cnt = 0;
  for (int i = 1; i <= n; i++)
  {
    if (!visited[i])
    {
      bfs(i);
      cnt++;
    }
  }

  cout << cnt;
}
