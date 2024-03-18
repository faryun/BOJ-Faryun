#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct boat
{
    int num;
    int speed;
    int rank;
};

bool compare(boat &a1, boat &b1)
{
    if(a1.speed == b1.speed) return false;
    return a1.speed > b1.speed;
}

int main()
{
    vector<boat> b;
    b.resize(10);
    int r, c;
    cin >> r >> c;
    //번호
    for(int n = 1; n < 10; n++) b[n].num = n;
    
    //이동한 칸 수
    for(int i = 0; i < r; i++)
    {
        string str;
        cin >> str;
        for(int j = 1; j < c-1; j++)
        {
            if(str[j] != '.')
            {
                int num = str[j] - '0';
                b[num].speed = j - 1;
                break;
            }
        }
    }
    
    int w = 1;
    int temp;
    //순위대로 정렬
    sort(b.begin()+1, b.end(), compare);

    //순위 계산
    for(int s = 1; s < 10; s++)
    {
        //동순위 처리
        if(temp != b[s].speed)
        {
            temp = b[s].speed;
            w++;
        }

        if(s == 1) w = 1;
        b[b[s].num].rank = w;
    }

    for(int o = 1; o < 10; o++) cout << b[o].rank << '\n';
        
    return 0;
}