#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // 벡터의 각 요소에 직접 입력받기
    }

    int left = 0, right = 0;
    int sum = 0;
    int cnt = 0;

    while (true)
    {
        if (sum >= m)
        {
            // 1. 현재 합이 목표(m)보다 크거나 같으면 왼쪽 포인터를 이동시켜 합을 줄임
            sum -= a[left++];
        }
        else if (right == n)
        {
            // 2. 오른쪽 포인터가 끝에 도달했는데 합이 m보다 작으면 더 이상 합을 키울 수 없음
            break;
        }
        else
        {
            // 3. 현재 합이 목표(m)보다 작으면 오른쪽 포인터를 이동시켜 합을 키움
            sum += a[right++];
        }

        // 합을 조절한 후에 목표값 m과 같은지 확인
        if (sum == m)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}