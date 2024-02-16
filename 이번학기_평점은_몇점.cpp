#include <iostream>

using namespace std;

int main()
{
    //입력
    int n;
    string lecture, score;
    float grade;
    float sum = 0.0f, total = 0.0f;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> lecture >> grade >> score;
        total += grade;

        if(score == "A+") sum += 4.3f * grade;
        else if(score == "A0") sum += 4.0f * grade;
        else if(score == "A-") sum += 3.7f * grade;
        else if(score == "B+") sum += 3.3f * grade;
        else if(score == "B0") sum += 3.0f * grade;
        else if(score == "B-") sum += 2.7f * grade;
        else if(score == "C+") sum += 2.3f * grade;
        else if(score == "C0") sum += 2.0f * grade;
        else if(score == "C-") sum += 1.7f * grade;
        else if(score == "D+") sum += 1.3f * grade;
        else if(score == "D0") sum += 1.0f * grade;
        else if(score == "D-") sum += 0.7f * grade;
        else score = 0.0f;
    }

    printf("%.2f", sum / total);
}