#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    string temp;
    int ra, rb;
    cin >> a >> b;
    
    temp = a;
    reverse(temp.begin(),temp.end());
    ra = stoi(temp);
    
    temp = b;
    reverse(temp.begin(),temp.end());
    rb = stoi(temp);

    if(ra > rb) cout << ra;
    else cout << rb;
    
    return 0;
}