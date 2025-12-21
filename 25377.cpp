#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int time = 1001;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a <= b)
        {
            if (b <= time)
                time = b;
        }
    }

    if (time == 1001)
        time = -1;

    cout << time;
    return 0;
}