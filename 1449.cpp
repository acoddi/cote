// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int n, l, cnt = 0;
//     cin >> n >> l;
//     int t = l;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr.begin(), arr.end());
//     float range = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > range)
//         {
//             cnt++;
//             range = arr[i] - 0.5 + l;
//         }
//     }

//     cout << cnt << "\n";
// }

#include <iostream>

using namespace std;

bool pipe[1001];

int main()
{
    int n, l;
    cin >> n >> l;

    for (int i = 0; i < n; i++)
    {
        int pos;
        cin >> pos;
        pipe[pos] = true;
    }

    int cnt = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (pipe[i])
        {
            cnt++;
            i += l - 1;
        }
    }

    cout << cnt << "\n";
}