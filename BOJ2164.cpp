#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> cards;
    int n;
    int temp;
    cin >> n;

    for(int i = 1; i <= n; i++) cards.push(i);
    
    while(true)
    {
        if(cards.size() == 1) break;
        cards.pop();
        temp = cards.front();
        cards.pop();
        cards.push(temp);
    }
    
    cout << cards.front() << endl;
    return 0;
}