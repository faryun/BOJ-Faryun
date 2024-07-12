#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string a6 = a, b6 = b;
    for(int i = 0; i < a.size(); i++)
    {
        if(a6[i] == '5') a6[i] = '6';
    }
    for(int j = 0; j < b.size(); j++)
    {
        if(b6[j] == '5') b6[j] = '6';
    }
    int max = stoi(a6) + stoi(b6);
    
    for(int i = 0; i < a.size(); i++)
    {
        if(a6[i] == '6') a6[i] = '5';
    }
    for(int j = 0; j < b.size(); j++)
    {
        if(b6[j] == '6') b6[j] = '5';
    }
    int min = stoi(a6) + stoi(b6);

    cout << min << " "<< max;
    return 0;
}