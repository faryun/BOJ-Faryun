#include <iostream>

using namespace std;

int main()
{
    bool button = false;
    int n;
    int result = 0, time = 1;
    string str;
    cin >> n;
    cin >> str;
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'W') time++;

        if(str[i] == 'P' && button) button = false;
        else if(str[i] == 'P') button = true;

        if(time == 1 && button) result = 1;
        else if (time == 2 && button) result = 6;
        else if (time == 3 && !button) result = 5;
        else if (time == 3 && button) result = 1;
    }
    
    cout << result << endl;
    return 0;
}