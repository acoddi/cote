#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        v[i].first = i;
        cin >> v[i].second;
    }

    int sum = v[n - 1].second;
    v.pop_back();

    sort(v.begin(), v.end());

    cout << "\n";
    cout << sum << "\n";
    return 0;
}