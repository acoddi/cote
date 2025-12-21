// #include <iostream>

// using namespace std;

// char usopc[] = {'u', 's', 'o', 'p', 'c'};
// int arr[5];
// int main()
// {
//     int n;
//     cin >> n;
//     string str;
//     cin >> str;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (usopc[j] == str[i])
//                 arr[j]++;
//         }
//     }

//     int mini = 9999;
//     for (int i = 0; i < 5; i++)
//     {
//         if (mini > arr[i])
//             mini = arr[i];
//     }

//     cout << mini;
//     return 0;
// }

#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    string str, target = "usopc";
    map<char, int> m;
    for (int i = 0; i < 5; i++)
    {
        m[target[i]] = 0;
    }

    cin >> n >> str;

    for (int i = 0; i < n; i++)
    {
        if (m.count(str[i]))
            m[str[i]]++;
    }

    int mini = 9999;
    for (auto p : m)
    {
        if (mini > p.second)
            mini = p.second;
    }
    cout << mini;
    return 0;
}
