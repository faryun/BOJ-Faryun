#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    int num;
    cin >> num;
    str = to_string(num);
    sort(str.begin(),str.end(),greater<>());
    cout << str << endl;
    return 0;
}