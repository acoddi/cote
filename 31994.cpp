#include <iostream>
#include <string>

using namespace std;

int main()
{
    string max_name;
    int max_value = -1;

    for (int i = 0; i < 7; i++)
    {
        string name;
        int value;
        cin >> name >> value;

        if (value > max_value)
        {
            max_value = value;
            max_name = name;
        }
    }

    cout << max_name << endl;

    return 0;
}