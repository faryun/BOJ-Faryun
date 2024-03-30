#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

long long int gcd(long long int n1, long long int n2)
{
    long long int temp;
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

    vector<int> num;

    int T;
    cin >> T;

    for(int t = 0; t <= T; t++)
    {
        num.clear();
        string n;
        long long result = 0;
        string str;

        getline(cin, str);
        stringstream sstream(str);
        while (getline(sstream, n, ' ')) // 문자열 분리
        num.push_back(stoi(n));

        for(int j = 0; j < num.size(); j++)
        {
            for(int l = j+1; l < num.size(); l++)
            {
                if(j == l) continue;
                if(result < gcd(num[j], num[l])) result = gcd(num[j], num[l]);
            }
        }

        if(t == 0) continue;
        else cout << result << '\n';
    }
    
    return 0;
}