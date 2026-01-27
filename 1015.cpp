#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> A(n);
    vector<int> B(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first;
        A[i].second = i;
        B[i] = A[i].first;
    }

    // sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // sort(A.begin(), A.end(), [](const auto &a, const auto &b)
    //      { return a.second < b.second; });

    for (int i = 0; i < n; i++)
    {
        cout << A[i].second << " ";
    }
    return 0;
}