#include <iostream>

using namespace std;

//최대 공약수
/*
입력으로 두 수 m,n(m>n)이 들어온다.
n이 0이라면, m을 출력하고 알고리즘을 종료한다.
m이 n으로 나누어 떨어지면, n을 출력하고 알고리즘을 종료한다.
그렇지 않으면, m을 n으로 나눈 나머지를 새롭게 m에 대입하고, m과 n을 바꾸고 3번으로 돌아온다.
*/

int gcd(int n1, int n2)
{
    int temp;
    if(n2 == 0) return n1;
    while (true)
    {
        if(n1 % n2 == 0) return n2;
        temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    
    if(num1 >= num2){
        cout << gcd(num1, num2) << endl;
        cout << num1 * num2 / gcd(num1, num2) << endl;
    }
    
    else
    {
        cout << gcd(num2, num1) << endl;
        cout << num2 * num1 / gcd(num1, num2) << endl;
    } 
    return 0;
}