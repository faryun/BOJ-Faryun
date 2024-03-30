#include <iostream>
#include <array>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(6);
    
    string name, gra;
    double score = 0;;
    double grade = 0;
    double sum = 0;
    for(int i = 0; i < 20; i++)
    {
        double s;
        cin >> name >> s >> gra;
        if(gra == "P") continue;
        if(gra == "A+") grade = 4.5;
        else if(gra == "A0") grade = 4.0f;
        else if(gra == "B+") grade = 3.5f;
        else if(gra == "B0") grade = 3.0f;
        else if(gra == "C+") grade = 2.5f;
        else if(gra == "C0") grade = 2.0f;
        else if(gra == "D+") grade = 1.5f;
        else if(gra == "D0") grade = 1.0f;
        else grade = 0.0f;

        sum += s * grade;
        score += s;
    }
    cout << sum / score;
    return 0;
}