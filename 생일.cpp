#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct birthday
{
    string name;
    int year;
    int month;
    int day;
};

bool compare(birthday &a, birthday &b)
{
    if(a.year == b.year) return a.month < b.month;
    if(a.month == b.month) return a.day < b.day;
    else return a.year < b.year;
}


int main()
{
    int n;
    cin >> n;

    vector<birthday> birth;
    birth.resize(n);
    for(int i = 0; i < n; i++)
    {
        string str;
        int d, m, y;
        cin >> str >> d >> m >> y;
        birth[i].name = str;
        birth[i].day = d;
        birth[i].month = m;
        birth[i].year = y;
    }
    
    sort(birth.begin(),birth.end(),compare);
    
    cout << birth[n-1].name << '\n';
    cout << birth[0].name << '\n';
}