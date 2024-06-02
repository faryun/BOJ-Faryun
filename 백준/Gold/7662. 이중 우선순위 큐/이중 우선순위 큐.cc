#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    for(int t = 0; t < T; t++)
    {
        priority_queue<long long> Q_max;
        priority_queue<long long,vector<long long>,greater<long long>> Q_min;
        multiset<long long, greater<long long>> Q;
        long long n;
        long long size = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            char c;
            long long num;
            cin >> c >> num;
            if(c == 'I')
            {
               Q.insert(num);
               size++;
            }

            else if(c == 'D')
            {
                if(Q.size())
                {
                    if(num == 1)
                    {
                        Q.erase(Q.begin());
                    }
                    else if(num == -1)
                    {
                        Q.erase(--Q.end());
                    }
                    size--;
                }
            }
        }

        if(Q.empty()) cout << "EMPTY" << '\n';
        else
        {
            for(auto j : Q)
            {
                Q_max.push(j);
                Q_min.push(j);
            }
            cout << Q_max.top() << " " << Q_min.top() << '\n';
        }
    }
    return 0;
}