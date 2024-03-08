#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    map<string, long long int> bus;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string city;
        long long int m;
        cin >> city >> m;
        bus.insert(make_pair(city, m));
    }

    long long int money = bus.at("jinju");
    long long int result = 0;

    for(auto b : bus)
    {
        if(b.second > money) result++;      
    }

    cout << money << '\n';
    cout << result << '\n';
    return 0;
}