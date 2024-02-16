#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string num;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if((num.back() - '0') % 2 == 0) cout << "even" << endl;
        else cout << "odd" << endl;
    }
}