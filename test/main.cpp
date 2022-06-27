#include <iostream>
using namespace std;
struct Stacks
{
    int Stack[5];
    int Top;
};
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
    Stacks S1;
    S1.Top = -1;
    Push(S1.Stack, 1, S1.Top);
    Push(S1.Stack, 2, S1.Top);
    Push(S1.Stack, 3, S1.Top);
    Push(S1.Stack, 4, S1.Top);
    Push(S1.Stack, 5, S1.Top);
    cout << "the arrays elements are : " << endl;
    for (int i : S1.Stack)
    {
        cout << i << ", ";
    }
    cout << endl;
    cout << "the element that pops out is : " << Pop(S1.Stack, S1.Top) << endl;
}