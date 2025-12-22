#include <iostream>

using namespace std;

int arr[10];

int main()
{
    string str;
    cin >> str;
    int t;
    for (int i = 0; i < str.length(); i++)
    {
        t = str[i] - '0';
        if (t == 6 || t == 9)
        {
            arr[6]++;
        }
        else
            arr[t]++;
    }
    arr[6] = (arr[6] + 1) / 2;

    int mnum = -1;

    for (int i = 0; i < 10; i++)
    {
        if (mnum < arr[i])
            mnum = arr[i];
    }

    cout << mnum;
    return 0;
}