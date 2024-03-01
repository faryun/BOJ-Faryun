#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int gcd(int n1, int n2)
{
    int temp;
    while (true)
    {
        if(n2 == 0) break;
        temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }

    return n1;
}

int main()
{
    string str;
    string buffer;
    char separator = ':';
    vector<int> num;
    int temp;
    getline(cin,str);
    istringstream iss(str);

    while(getline(iss, buffer, separator))
    {
        num.push_back(stoi(buffer));
    }

    temp = gcd(num[0], num[1]);
    cout << num[0] / temp << ":" << num[1] / temp;
    return 0;
}