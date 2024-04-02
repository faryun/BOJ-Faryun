#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> books;
    int box, book;
    int sum = 0;
    int result = 1;

    cin >> book >> box;

    for(int i = 0; i < book; i++)
    {
        int input;
        cin >> input;
        books.push_back(input);
    }
    
    while (true)
    {
        if(books.empty()) break;

        if(sum + books[0] > box)
        {
            sum = 0;
            result++;
        }

        else
        {
            sum += books[0];
            books.pop_front();
        }
    }

    if(book != 0) cout << result;
    else cout << 0;
    
    return 0;
}