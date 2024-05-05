#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct seller
{
    int price;
    int deilver;
};

bool compare(seller &a, seller &b)
{
    if(a.price == b.price) return a.deilver < b.deilver;
    return a.price < b.price;
}

int main()
{
    //입력
    vector<seller> sell;
    int n;
    cin >> n;
    sell.resize(n);

    for(int i = 0; i < n; i++)
    {
        int p, d;
        cin >> p >> d;
        sell[i].price = p;
        sell[i].deilver = d;
    }
    
    sort(sell.begin(), sell.end(), compare);

    int max;
    int max_sum = 0;
    int temp;
    int temp_sum = 0;
    for(int j = 0; j < sell.size(); j++)
    {
        if(j == 0) max = sell[0].price;
        else temp = sell[j].price;

        //최대 가격보다 이하면 물건을 구매하고, 가격이 배달비 미만이어야 판매함.
        for(int l = j; l < sell.size(); l++)
        {
            if(j == 0) 
            {
                if(max > sell[l].deilver) max_sum += max - sell[l].deilver;
            }
            else
            {
                if(temp <= sell[l].price && temp > sell[l].deilver) temp_sum += temp - sell[l].deilver;
            }
        }

        if(temp_sum > max_sum)
        {
            max = temp;
            max_sum = temp_sum;
        }
        
        temp_sum = 0;
    }

    if(max_sum <= 0) cout << 0;
    else cout << max;
    return 0;
}