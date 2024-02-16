#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    float score;
    cin >> str;
    if(str == "A+") score = 4.3f;
    else if(str == "A0") score = 4.0f;
    else if(str == "A-") score = 3.7f;
    else if(str == "B+") score = 3.3f;
    else if(str == "B0") score = 3.0f;
    else if(str == "B-") score = 2.7f;
    else if(str == "C+") score = 2.3f;
    else if(str == "C0") score = 2.0f;
    else if(str == "C-") score = 1.7f;
    else if(str == "D+") score = 1.3f;
    else if(str == "D0") score = 1.0f;
    else if(str == "D-") score = 0.7f;
    else score = 0.0f;
    printf("%.1f", score);
    return 0;
}