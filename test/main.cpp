#include <iostream>
using namespace std;
struct Stacks
{
    int Stack[5];
    int Top;
    static bool CheckStackEmptiness(int top)
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
    int  *Push (int element)
    {
        Top = Top + 1;
        Stack[Top] = element;
        return Stack;
    }
    int Pop()
    {
        if (CheckStackEmptiness(Top))
        {
            cout << "underflow" << endl;
            return -1;
        }
        else
        {
            Top = Top - 1;
            return Stack [Top + 1];
        }
    }
};
int main()
{
    Stacks S1;
    S1.Top = -1;
    S1.Push(1);
    S1.Push(2);
    S1.Push(3);
    S1.Push(4);
    S1.Push(5);
    cout << "the arrays elements are : " << endl;
    for (int i : S1.Stack)
    {
        cout << i << ", ";
    }
    cout << endl;
    cout << "the element that pops out is : " << S1.Pop() << endl;
}