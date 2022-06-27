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
    void Push (int element)
    {
        Top = Top + 1;
        try
        {
            if (Top > 4)
            {
                throw Top;
            }
            Stack[Top] = element;
        }
        catch (int Exception)
        {
            cout << "Error, its out of stack's size and u cant push any thing else and the last top value will still be "
            << Exception - 1 << endl;
        }
    }
    int Pop()
    {
        try
        {
            if (CheckStackEmptiness(Top))
            {
                throw Top;
            }
        }
        catch (int Exception)
        {
            cout << "Error, the stack is empty so top value still is " << Exception << endl;
        }
        Top = Top - 1;
        return Stack [Top + 1];
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