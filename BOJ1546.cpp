#include <iostream>

using namespace std;

int main()
{
    int n, score[1000];
    double max = 0;
    double new_score[1000];
    double temp = 0.0;
    double avg = 0.0;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> score[i];
        if(score[i] >= max) max = score[i];
    }
    
    for(int j = 0; j < n; j++)
    {
        new_score[j] = score[j] / max * 100;
        temp += new_score[j];
    }
    avg = temp / n;

    cout << avg << endl;
    return 0;
}