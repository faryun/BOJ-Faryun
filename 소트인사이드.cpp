#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    int num;
    str = to_string(num);
    sort(str.begin(),str.end());
    cout << str << endl;
    return 0;
}