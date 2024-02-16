#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int width, height, x, y, player;
    int rad, cir1_x, cir1_y, cir2_x, cir2_y;
    int result = 0;
    cin >> width >> height >> x >> y >> player;
    rad = height / 2;
    cir1_x = x;
    cir2_x = x + width;
    cir1_y = y + rad;
    cir2_y = y + rad;

    for(int i = 0; i < player; i++)
    {
        int player_x, player_y;
        cin >> player_x >> player_y;
        
        //직사각형
        if((player_x >= x && player_x <= x + width) && (player_y >= y && player_y <= y + height)) result++;

        //첫번째 원
        else if((pow(player_x - cir1_x,2) + pow(player_y - cir1_y,2)) <= pow(rad,2)) result++;
        
        //두번째 원
        else if((pow(player_x - cir2_x,2) + pow(player_y - cir2_y,2)) <= pow(rad,2)) result++;
    }

    cout << result << endl;
    return 0;
}