#include <iostream>
#include <queue>

using namespace std;

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    while (!q.empty())
    {
        int n = q.front();
        q.pop();
    }
}
int main()
{
    int n, k; // 5,17
    cin >> n >> k;
    return 0; // 4
}