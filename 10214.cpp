#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int y_total = 0, k_total = 0;

        for (int i = 0; i < 9; i++)
        {
            int y_score, k_score;
            cin >> y_score >> k_score;

            y_total += y_score;
            k_total += k_score;
        }

        if (y_total > k_total)
            cout << "Yonsei" << "\n";
        else if (y_total < k_total)
            cout << "Korea" << "\n";
        else
            cout << "Draw" << "\n";
    }
    return 0;
}