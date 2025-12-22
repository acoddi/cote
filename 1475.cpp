#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt = 1;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < str.length(); i++)
    {
        int t;
        t = str[i] - '0';
        if (t == 6 || t == 9)
        {
            if (arr[5])
        }
    }
    return 0;
}