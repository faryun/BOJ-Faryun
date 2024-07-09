#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int num, T, query;
    cin >> T;

    long long int sum = 0;
    int result = 0;
    for(int t = 0; t < T; t++)
    {
        cin >> query;
        switch (query)
        {
        case 1:
            //삽입
            cin >> num;
            sum += num;
            result ^= num;
            break;
        case 2:
            //제거
            cin >> num;
            sum -= num;
            result ^= num;
            break;
        case 3:
            //전체합
            cout << sum << "\n";
            break;
        case 4:
            //XOR
            cout << result << "\n";
            break;
        default:
            break;
        }
    }

    return 0;
}