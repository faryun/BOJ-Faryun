#include <iostream>

using namespace std;
#define max 10

int main()
{
    int result = 0;
    int score; 
    for(int i = 0; i < max; i++)
    {
        cin >> score;
        result += score;
        if(result >= 100) break;
    }
    cout << result << endl;
    return 0;
}