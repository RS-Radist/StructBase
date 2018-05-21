#include "Queue.hpp"
#include <iostream>
Queue::Queue()
{
    head=NULL;
}
void Queue::Push(int x)
{
    if(head==NULL)
    {
    Node* temp=new Node;
    temp->number=x;
    temp->next=NULL;
    head=tail=temp;
    }
    else
    {
        Node* temp=new Node;
        temp->number=x;
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
        
    }
}
void Queue::Pop()
{
    if(head->next!=NULL)
    {
        Node*temp=head;
        head=head->next;
        delete temp;
    }
    else
    {
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }
}
bool Queue::Empty()
{
    if (head==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Queue:: Print()
{
    Node *temp=head;
    while (temp!=NULL)
    {
        std::cout<<"       "<<" [ "<<temp->number<<" ] ";
        temp=temp->next;
    }
}
//    1 2 3 4 5
