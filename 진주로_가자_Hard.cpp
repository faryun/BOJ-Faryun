#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<long long int> bus;
    long long int money;
    long long int result = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string city;
        long long int m;
        cin >> city >> m;
        bus.push_back(m);
        if(city == "jinju") money = m;
    }


    for(auto b : bus)
    {
        if(b > money) result++;      
    }

    cout << money << '\n';
    cout << result << '\n';
    return 0;
}