#include <iostream>
#include <array>

using namespace std;

//0과 1의 갯수를 메모하는 배열
array<int,41> zero = {0,};
array<int,41> one = {0,};

//현재 0과 1의 갯수
int z = 0;
int o = 0;

//이거 함수를 뜯어고치면 안될거 같은데
int fibonacci(int n) 
{
    //현재 0과 1의 갯수를 구해서 재귀가 다 돌았으면... 기억해둔거에 더해주고 초기화
    //재귀가 다 돌았는지는 어캐알지 ㅁㄴㅇㄹ...
    if (n == 0)
    {
        z++;
        return 0;
    }

    else if (n == 1) 
    {
        o++;
        return 1;
    } 
    
    //재귀
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, num;
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        z = 0;
        o = 0;
        fibonacci(num);
        cout << z << " " << o << '\n';
    }

    return 0;
}