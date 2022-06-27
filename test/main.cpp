#include <iostream>
using namespace std;
bool CheckStackEmptiness(int top)
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int  *Push (int Stack[5], int element, int &top)
{
    top = top + 1;
    Stack[top] = element;
    return Stack;
}
int Pop(int Stack[5], int &top)
{
    if (CheckStackEmptiness(top))
    {
        cout << "underflow" << endl;
        return -1;
    }
    else
    {
        top = top - 1;
        return Stack [top + 1];
    }
}
int main()
{
    int top;
    top = -1;
    int Stack[5];
    Push(Stack, 1, top);
    Push(Stack, 2, top);
    Push(Stack, 3, top);
    Push(Stack, 4, top);
    Push(Stack, 5, top);
    cout << "the arrays elements are : " << endl;
    for (int i : Stack)
    {
        cout << i << ", ";
    }
    cout << endl;
    cout << "the element that pops out is : " << Pop(Stack, top) << endl;
}