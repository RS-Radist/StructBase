#include <iostream>
#include "dynamic_array.hpp"
#include <string>
using namespace std;

DynamicArray::DynamicArray():size(-1)
{
    array=new int;
}

void DynamicArray::Push(int number)
{
    if(size<0)
    {
        size++;
        array[size]=number;
    }
    else
    {
        size++;
        int* temp=new int [size];
        memcpy(temp,array,sizeof(int));
        delete [] array;
        array=new int [size];
        memcpy(array,temp,sizeof(int));
        array[size]=number;
        delete[] temp;
    }
}
void DynamicArray::Pop()
{
    try
    {
        size--;
        if (size<0)
        {
            throw (std::string)"Fail";
        }
        int* temp = new int [size];
        memcpy(temp,array,sizeof(int));
        delete array;
        array=new int [size];
        memcpy(array,temp,sizeof(int));
        delete[] temp;
    }
    catch (std::string)
    {
        std::cout<<"(size<0) - Fail"<<std::endl;
    }
}
void DynamicArray::Print ()
{
    for(int i=0;i<size+1;++i)
    {
        cout<<"                "<<" [ "<<array[i]<<" ] ";
    }
}
bool DynamicArray::Empty()
{
    if (size<0)
        return true;
    else
        return false;
}


