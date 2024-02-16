#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pitch;
    int ball = 0, runner = 0, score = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> pitch;
        if(ball >= 4)
        {
            ball = 0;
            runner += 1;
        }

        else
        {
            if(pitch == 1) {
                ball++;
            }

            else if(pitch == 2) true;
            else if(pitch == 3) true;
        }
    }
    return 0;
}