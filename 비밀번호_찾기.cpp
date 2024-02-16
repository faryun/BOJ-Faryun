#include <iostream>
#include <map>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    map<string,string> m;
    string link, password;
    int in, out;
    cin >> in >> out;
    for(int i = 0; i < in; i++)
    {
        cin >> link >> password;
        m.insert(make_pair(link,password));
    }

    for(int o = 0; o < out; o++)
    {
        cin >> link;
        cout << m.find(link)->second << '\n';
    }
    return 0;
}