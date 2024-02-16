#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> A;
    vector<int> B;
    vector<int> C;

    int a, b, num;
    cin >> a >> b;

    for(int i = 0; i < a; i++)
    {
        cin >> num;
        A.push_back(num);
    }

    for(int j = 0; j < b; j++)
    {
        cin >> num;
        B.push_back(num);
    }
    
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    set_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(C,C.begin()));
    set_difference(B.begin(),B.end(),A.begin(),A.end(),inserter(C,C.begin()));
    
    cout << C.size() << '\n';
    return 0;
}