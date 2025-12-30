#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        a.push_back(m);
    }
    vector<int> dp(n);
    dp[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
            dp[i] = dp[0] + 1;
    }
}