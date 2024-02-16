#include <iostream>
#include <string>

using namespace std;

int length(int array[])
{
    //size: 큐에 들어있는 정수의 개수를 출력한다.
    int length = 0;
    for(int i = 0; i <= size_t(array) / sizeof(int); i++)
    {
        if(array[i] != 0) length++;
        else continue;
    }
    return length;
}

bool empty(int array[])
{
    //empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
    if(length(array) == 0) return true;
    else return false;
}

void push(int array[], int n)
{
    //push X: 정수 X를 큐에 넣는 연산이다.
    array[length(array)] = n;
}

void pop(int array[])
{
    //pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    if(!empty(array))
    {
        for(int i = 0; i <= length(array); i++)
        {
            if(array[i] == 0) continue;
            else
            {
                cout << array[i] << endl;
                array[i] = 0;
                break;
            }
        }
    }

    else cout << -1 << endl;
}

int front(int array[])
{
    //front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    if(!empty(array))
    {
        for(int i = 0; i < length(array); i++)
        {
            if(array[i] == 0) continue;
            else
            {
                return array[i];
                break;
            }
        }
    }

    else return -1;
}

int back(int array[])
{
    //back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다. 
    if(!empty(array))
    {
        for(int i = 0; i <= length(array); i++)
        {
            if(array[i] != 0) continue;
            else
            {
                return array[i - 1];
                break;
            }
        }
    }

    else return -1;
}

int main()
{
    //입력
    int n, input;
    string str;

    cin >> n;
    int *stack_ptr = new int[n]();

    for(int i = 0; i < n;i++)
    {
        cin >> str;

        if(str == "push")
        {
            cin >> input;
            push(stack_ptr, input);
        }

        else if(str == "pop") pop(stack_ptr);
        
        else if(str == "size") cout << length(stack_ptr) << endl;
        
        else if(str == "empty")
        {
            if(empty(stack_ptr)) cout << 1 << endl;
            else cout << 0 << endl;
        }
        
        else if(str == "front") cout << front(stack_ptr) << endl;

        else if(str == "back") cout << back(stack_ptr) << endl;
    }

    delete[] stack_ptr;

    return 0;
}