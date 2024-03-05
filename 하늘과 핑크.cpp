#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int sa = 0, sb = 0;
    int ra = 1, rb = 1;
    int temp = 0, min;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int ia, ib;
        cin >> ia >> ib;
        sa += ia;
        sb += ib;
    }
    //최소가 되는 값을 찾는 반복횟수를 줄일 순 없을까?
    
    cout << sb << " " << sa;
    return 0;
}