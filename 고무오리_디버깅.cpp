#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int problem = 0;
    while (true)
    {
        getline(cin,str);
        if(str == "고무오리 디버깅 끝") break;
        else if(str == "문제") problem += 1;
        else if(str == "고무오리")
        {
            if(problem >= 1) problem -= 1;
            else problem += 2;
        }
    }

    if(problem) cout << "힝구" << '\n';
    else cout << "고무오리야 사랑해" << '\n';
}