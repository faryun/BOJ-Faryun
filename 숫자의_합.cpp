#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int n, answer = 0;
    cin >> n >> str;

    for(int i = 0; i < str.length(); i++)
    {
        answer += str[i] - '0';
    }

    cout << answer << endl;
}