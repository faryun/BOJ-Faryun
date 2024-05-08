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
    //남은 비전공 과목 수
    int needy = need_t - needx;

    bool flag;
    while (true)
    {
        if(n >= 8) break;
        
        n++;
        
        int x, y;
        cin >> x >> y;

        //개설과목이 6개 이상이면 필요한 만큼
        if(x + y > 6)
        {
            //전공 개설이 6개 이상이면
            if(y >= 6) 
            {
                //남은 전공이 6개 이상일때는 다 전공으로
                if(needy >= 6) needy -= 6;
                //전공 필요한 만큼 듣기
                else
                {
                    needy -= 6 - (y - needy);
                }
            }

            else
            {
                needy -= y;
                needx -= 6 - y;
            }
        }

        //개설 과목이 6과목 이하면 그냥 다 들으면 됨
        else
        {
            needx -= x;
            needy -= y;    
        }

        if(needx <= 0 && needy <= 0) flag = true;
    }
    
    if(flag) cout << "Nice";
    else cout << "Nae ga wae";
    return 0;
}