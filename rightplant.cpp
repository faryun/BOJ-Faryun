#include <iostream>
#include <list>

using namespace std;

int main()
{
    int n;
    cin >> n;
    list<int> num;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0) num.push_back(i);
        else num.push_front(i);
    }

    for(auto o : num) cout << o << " ";
    return 0;
}