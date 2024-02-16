#include <iostream>

using namespace std;

int main()
{
    int student[30];
    int temp;
    for(int i = 0; i < 30; i++)
    {
        student[i] = 0;
    }

    for(int i = 0; i < 30; i++)
    {
        cin >> temp;
        student[temp-1] = temp;
    }

    for(int j = 0; j < 30; j++)
    {
        if(student[j] == 0) cout << j+1 << endl;
    }
    return 0;
}