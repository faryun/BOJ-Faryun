#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    //전공 최소 66 교양 최소 64
    //남은 전공 과목 수
    int needx = (66 - a) / 3;
    //남은 전체 과목 수
    int need_t = (130 - b) / 3;
    //과목당 3학점이니 나머지가 있으면 한 과목 추가
    if((130 - b) % 3 != 0) need_t++;
    if((66 - a) % 3 != 0) needx++;

    bool flag;
    while (true)
    {
        if(n >= 8) break;
        
        n++;
        
        int x, y;
        cin >> x >> y;

        //개설과목이 6개 이상일때,
        if(x + y > 6)
        {
            //전공 개설이 6개 이상이면
            if(x >= 6) 
            {
                needx -= 6;
                need_t -= 6;
            }
            
            else
            {
                needx -= x;
                need_t -= x;
                need_t -= 6 - x;
            }
        }

        //개설 과목이 6과목 이하면 그냥 다 들으면 됨
        else
        {
            needx -= x;
            need_t -= x;
            need_t -= 6 - x;
        }

        if(need_t <= 0) flag = true;
    }
    
    if(flag) cout << "Nice";
    else cout << "Nae ga wae";
    return 0;
}