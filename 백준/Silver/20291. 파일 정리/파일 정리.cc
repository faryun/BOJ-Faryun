#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    char sep = '.';
    int n;
    cin >> n;
    map<string, int> file;

    for(int i = 0; i <= n; i++)
    {
        string str;
        string temp;
        int t = 0;
        //문자열 분리
        getline(cin, str);
        stringstream sstream(str);
        while (getline(sstream, temp, '.'))
        {
            if(t != 0)
            {
                //확장자가 없으면 추가, 있으면 ++;
                if(file.find(temp) == file.end()) file.insert(make_pair(temp,1));
                else file.find(temp)->second++;
                t = 0;
            }

            else t++;
        }
    }

    for(auto o : file) cout << o.first << " " << o.second << '\n';

    return 0;
}