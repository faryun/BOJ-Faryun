#include <iostream>

using namespace std;

int main()
{
    int t, vote;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> vote;
        for(int j = 0; j < vote / 5; j++)
        {
            cout << "++++" << " ";
        }
        for(int l = 0; l < vote % 5; l++)
        {
            cout << "|";
        }
        cout << endl;
    }
    return 0;
}