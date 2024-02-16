#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> cards;
    int n;
    int temp;
    cin >> n;

    for(int i = 1; i <= n; i++) cards.push_back(i);
    
    while(true)
    {
        if(cards.size() == 1) break;
        temp = cards.front();
        cout << temp << " ";
        cards.pop_front();
        temp = cards.front();
        cards.pop_front();
        cards.push_back(temp);
    }
    
    cout << cards.front() << endl;
    return 0;
}