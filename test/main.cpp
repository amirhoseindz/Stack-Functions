#include <iostream>
#include <stdexcept>
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
            throw out_of_range (", you cant push any more elements");
        }
        Top = Top + 1;
        Stack[Top] = element;
    }
    int Pop()
    {
        if (CheckStackEmptiness(Top))
            throw out_of_range ("the stack is empty");
        Top = Top - 1;
        return Stack [Top + 1];
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
    catch(out_of_range &Exception)
    {
        cout << "Error : its out of stack's size " << Exception.what() << endl;
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
    catch(out_of_range &Exception)
    {
        cout << "\n Error, "<< Exception.what() << endl;
    }
}