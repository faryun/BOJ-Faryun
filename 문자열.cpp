#include <iostream>

using namespace std;

int main()
{
    string a, b;
    int result;
    cin >> a >> b;

    for(int i = 0; i < b.size(); i++)
    {
        if(a[i] != b[i]) result++;
    }

    cout << result << endl;
    
    return 0;
}