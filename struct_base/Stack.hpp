#ifndef Stack_hpp
#define Stack_hpp
#include <iostream>
#include <stdio.h>
#include "Abstract_Class/Abstract.hpp"


class Stack :public Abstract
{
private:
    int* stack;
    int size;
public:
    Stack();
    void Push(int x);
    void Pop();
    bool Emptiness();
    void Print(); // сделать if если у нас нету элементов выводить сообщение нет элементов
    bool Empty();
};



#endif /* Stack_hpp */
