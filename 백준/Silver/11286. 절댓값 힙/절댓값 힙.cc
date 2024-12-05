#include <iostream>
#include <queue>
#include <vector>
#include <math.h>

using namespace std;

struct compare
{
    bool operator()(int a, int b)
    {
        if(abs(a) == abs(b)) return a > b;
        return abs(a) > abs(b);
    }
};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<int,vector<int>,compare> num;
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        if(n == 0 && num.empty()) cout << 0 << '\n';
        else if(n == 0) 
        {
            cout << num.top() << '\n';
            num.pop();
        }
        else num.push(n);
    }
    
    return 0;
}