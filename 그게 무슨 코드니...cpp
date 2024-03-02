#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int real = 0;
    string str;
    string result;
    getline(cin, str);

    for(int i = 0; i < str.size(); i++)
    {
        if(sum == 2) break;

        if(str[i] == '"') sum++;
        else real++;
        
    }

    //정확한 문자열이 아닐경우
    if(sum != 2) result = "CE";
    
    //빈 문자열
    else if(str.size() == 2) result = "CE";

    //큰 따옴표 두개 뒤에 문자
    else if(real + 2 != str.size()) result = "CE";
    
    //결과 문자열
    else
    {
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '"') continue;
            else result += str[i];
        }
    }

    cout << result << endl;
}