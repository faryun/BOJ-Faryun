#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> A;
    set<int> B;
    set<int> C;

    int a, b, num;
    cin >> a >> b;

    for(int i = 0; i < a; i++)
    {
        cin >> num;
        A.insert(num);
    }

    for(int j = 0; j < b; j++)
    {
        cin >> num;
        B.insert(num);
    }
    
    set_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(C,C.begin()));
    set_difference(B.begin(),B.end(),A.begin(),A.end(),inserter(C,C.begin()));
    
    cout << C.size() << '\n';
    return 0;
}