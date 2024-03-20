#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct person
{
    int ac;
    int pen;
};

bool compare(person &a1, person &b1)
{
    if(a1.ac == b1.ac) return a1.pen < b1.pen;
    return a1.ac > b1.ac;
}

int main()
{
    vector<person> score;
    int n;
    cin >> n;
    score.resize(n);
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        int solved, p;
        cin >> solved >> p;
        score[i].ac = solved;
        score[i].pen = p;
    }

    sort(score.begin(),score.end(),compare);

    for(int o = 5; o < n; o++)
    {
        if(score[4].ac == score[o].ac) result++;
    }

    cout << result;

    return 0;
}