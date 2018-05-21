#ifndef Queue_hpp
#define Queue_hpp
#include <stdio.h>
#include "Abstract_Class/Abstract.hpp"
class Queue: public Abstract
{
private:
    struct Node
    {
        Node* next;
        int number;
    };
    
    Node*head;
    Node*tail;
public:
    Queue();
    void Push(int x);
    void Pop();
    void Print();
    bool Empty();
};

#endif /* Queue_hpp */
