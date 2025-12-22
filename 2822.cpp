#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<pair<int, int>> arr(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end(), greater<>());

    int sum = 0;
    vector<int> ar(5);
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i].first;
        ar[i] = arr[i].second;
    }

    sort(ar.begin(), ar.end());

    cout << sum << "\n";
    for (auto t : ar)
    {
        cout << t << " ";
    }
}