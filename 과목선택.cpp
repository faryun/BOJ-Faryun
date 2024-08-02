#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> a;
    priority_queue<int> b;
    int sum = 0;
    for(int i = 0; i < 6; i++)
    {
        int score;
        cin >> score;
        if(i < 4) a.push(score);
        else b.push(score);
    }

    for(int s = 0; s < 4; s++)
    {
        if(s < 3)
        {
            sum += a.top();
            a.pop();
        }

        else sum += b.top();
    }

    cout << sum;
    return 0;
}