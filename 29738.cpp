#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int x;
        cin >> x;

        cout << "Case #" << i << ": ";

        if (x > 4500)
            cout << "Round 1" << "\n";
        else if (x > 1000)
            cout << "Round 2" << "\n";
        else if (x > 25)
            cout << "Round 3" << "\n";
        else
            cout << "World Finals" << "\n";
    }

    return 0;
}