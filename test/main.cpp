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
        if (Top == sizeof(Stack)/sizeof(Stack[0]) - 1)
        {
            throw Top;
        }
        Top = Top + 1;
        Stack[Top] = element;
    }
    int Pop()
    {
        if (CheckStackEmptiness(Top))
        {
            throw "the stack is empty";
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
    try
    {
        S1.Push(1);
        S1.Push(2);
        S1.Push(3);
        S1.Push(4);
        S1.Push(5);
        S1.Push(6);
    }
    catch(int Exception)
    {
        cout << "Error : its out of stack's size and u cant push any more elements and the top value will still be : "
        << Exception << endl;
    }
    cout << "the arrays elements are : " << endl;
    for (int i : S1.Stack)
    {
        cout << i << ", ";
    }
    cout << endl;
    try
    {
        cout << "the element that pops out is : " << S1.Pop() << endl;
    }
    catch(const char *Exception)
    {
        cout << "Error : " << Exception << endl;
    }
}