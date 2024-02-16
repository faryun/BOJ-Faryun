#include <iostream>
#include <list>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T,n;
    list<long long> num;
    
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> n;
        if(n == 0 && num.size() == 0) cout << 0 << "\n";
        else{
            num.sort();
            if(n == 0) {
                cout << num.front() << "\n";
                num.pop_front();
            }
            else num.push_back(n);
        }
    }
    return 0;
}