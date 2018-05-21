#include <iostream>
#include "Stack.hpp"
#include <string>
using namespace std;

Stack::Stack() : size(-1)
{
    stack=new int;
}
void Stack::Push(int number)
{
        size++;
        stack[size]=number;
}
void Stack::Pop()
{
    try
    {
        size--;
        if (size<0)
        {
            throw (std::string)"Fail";
        }
        int*temp;
        temp=new int [size];
        memcpy(temp, stack, sizeof(int));
        delete [] stack;
        stack=new int [size];
        memcpy(stack, temp, sizeof(int));
        delete [] temp;
    }
    catch (std::string temp)
    {
        std::cout<<"(size<0)-Danger"<<std::endl;
    }
}

bool Stack::Emptiness()
{
    if (size==0)
    {
        std::cout<<"Stack empty";
        return false;
    }
    else
        std::cout<<"Stack filled";
    return true;
}

void  Stack::Print ()
{
    for (int i=0;i<size+1;++i)
    {
        cout<<"                     "<<" [ "<<stack[i]<<" ] ";
    }
}
bool Stack::Empty()
{
    if (size<0)
        return true;
    else
        return false;
}


