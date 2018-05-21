#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include "Abstract_Class/Abstract.hpp"
using namespace std;
class List : public Abstract
{
private:
    struct Node
    {
        Node* next;
        Node* prev;
        int number;
    };
    Node* head;
    Node* tail;
public:
    List();
    void Push(int x);
    void Pop();
    void Print();
    bool Empty();
};
#endif /* List_hpp */
