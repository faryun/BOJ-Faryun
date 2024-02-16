#include <iostream>
#include <list>
using namespace std;

int main()
{
    int t, n, sum;
    list<int> score;
    cin >> t;

    for(int i = 0; i<t; i++)
    {
        cin >> n;
        score.push_back(n);
    }
    
    score.sort();

    for(auto o : score)
    {
        sum += o;
    }

    cout << sum / t << endl;
    return 0; 
}