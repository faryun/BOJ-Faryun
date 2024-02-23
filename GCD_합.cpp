#include <iostream>
#include <array>
using namespace std;

int gcd(int n1, int n2)
{
    int temp;
    while (true)
    {
        if(n2 == 0) break;
        temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }

    return n1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int n;
        long long int result = 0;
        array<int,100> num;
        
        cin >> n;
        for(int i = 0; i < n; i++) cin >> num[i];

        for(int j = 0; j < n; j++)
        {
            for(int l = j+1; l < n; l++)
            {
                if(j == l) continue;
                if(num[j] > num[l]) result += gcd(num[j], num[l]);
                else result += gcd(num[l], num[j]);
            }
        }

        cout << result << '\n';
    }
    
    return 0;
}