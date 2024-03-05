#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int real = 0;
    string str;
    string result;
    getline(cin, str);

    if(str.front() == '"' && str.back() == '"' && str.size() > 2)
    {
        result = str.substr(1,str.size()-2);
    }

    else result = "CE";
    
    cout << result << endl;
}