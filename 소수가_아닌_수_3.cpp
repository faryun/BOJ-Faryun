#include <iostream>
#include <vector>

using namespace std;

bool isprime(int n)
{
    if(n <= 1) return false;
    for(int p = 2; p < n; p++)
    {
        if (n % p == 0) return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int result;
    bool yn = false;
    vector<int> num;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        num.push_back(input);
    }
    
    //주어진 수가 합성수일 경우
    for(int j = 0; j < n; j++)
    {
        if(!isprime(num[j]) && num[j] != 0)
        {
            yn = true;
            result = num[j];
            break;
        }
    }

    if(yn)
    {
        cout << "YES" << '\n';
        cout << result << '\n';
    }

    else cout << "NO" << '\n';

    return 0;
}