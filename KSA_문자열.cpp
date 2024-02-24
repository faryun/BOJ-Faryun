#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int result = 0;
    cin >> str;
    string like = str;
    int len = str.size();

    for(int i = 0; i < len; i++)
    {
        if(i % 3 == 1) like[i] = 'K';
        else if(i % 3 == 2) like[i] = 'S';
        else if(i % 3 == 0) like[i] = 'A';
    }

    cout << like << endl;
    /*
    존재하는 아무 문자를 한 개 제거한다.
    맨 앞에 아무 문자를 한 개 추가한다.
    맨 뒤에 아무 문자를 한 개 추가한다.
    */
    return 0;
}