#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{

    // 1. C++ 표준 스트림과 C 표준 스트림의 동기화를 끊어서 속도를 높입니다.
    ios_base::sync_with_stdio(false);
    // 2. cin과 cout의 묶음을 풀어서 입력 시마다 출력을 비우지 않게 합니다.
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    map<string, int> book;
    vector<string> arr(n + 1);

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        book.insert({name, i + 1});
        arr[i + 1] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        if (isdigit(str[0]))
        {
            int id = stoi(str);
            cout << arr[id] << "\n";
        }
        else
        {
            cout << book.find(str)->second << "\n";
        }
    }
    return 0;
}