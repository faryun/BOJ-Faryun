#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    vector<int> b;
    int n;
    int result = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        a.push_back(input);
    }

    for(int j = 0; j < n; j++)
    {
        int input;
        cin >> input;
        b.push_back(input);
    }

    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end());
    
    for(int o = 0; o < n; o++)
    {
        if(a[o] > b[o]) result += 2;
        else if(a[o] == b[o]) result++;
    }

    cout<< result;
    return 0;
}