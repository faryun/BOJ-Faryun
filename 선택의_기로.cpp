#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct product
{
    int quality;
    int price;
};

bool sort_quality(product &a, product &b)
{
    if(a.quality == b.quality) return a.price < b.price;
    else return a.quality > b.quality;
};

bool sort_price(product &a, product &b)
{
    if(a.price == b.price) return a.quality > b.quality;
    else return a.price < b.price;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<product> list;
    int n;
    cin >> n;
    list.resize(n);

    for(int i = 0; i < n; i++)
    {
        int p, q;
        cin >> q >> p;
        list[i].quality = q;
        list[i].price = p;
    }

    sort(list.begin(), list.end(), sort_quality);

    for(int j = 0; j < 2; j++)
    {
        cout << list[j].quality << " " << list[j].price << " "; 
    }
    cout << '\n';

    sort(list.begin(), list.end(), sort_price);

    for(int j = 0; j < 2; j++)
    {
        cout << list[j].quality << " " << list[j].price << " "; 
    }
    cout << '\n';

    return 0;
}