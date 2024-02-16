#include <iostream>
#include <set>

using namespace std;

int main()
{
    int num;
    set<int> remain;

    for(int i=0; i < 10; i++)
    {
        cin >> num;
        remain.insert(num % 42);
    }

    cout << remain.size() << endl;

    return 0;
}