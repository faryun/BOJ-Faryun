#include <iostream>
#include <vector>
using namespace std;

int gcd(int n1, int n2)
{
    int temp;
    while (true)
    {
        if(n2 == 0) break;
        temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }

    return n1;
}

int main()
{
    int n, x;
    cin >> n;
    vector<int> num;
    double avg;
    double sum = 0;
    double temp = 0;
    for(int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        num.push_back(in);
    }

    cin >> x;
    
    for(int r = 0; r < num.size(); r++)
    {
        if(gcd(num[r],x) == 1)
        {
            temp++;
            sum += num[r];
        }
    }

    cout << sum / temp;
    return 0;
}