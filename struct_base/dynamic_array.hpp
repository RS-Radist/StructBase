#ifndef dynamic_array_hpp
#define dynamic_array_hpp
#include <iostream>
#include <stdio.h>
#include "Abstract_Class/Abstract.hpp"

class DynamicArray:public Abstract
{
private:
    int*array;
    int size;
public:
    DynamicArray();
    void Push(int number);
    void Pop();
    void Print();
    bool Empty();
};


#endif /* dynamic_array_hpp */
