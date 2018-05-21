#include <iostream>
#include "List.hpp"
using namespace std;
List::List()
{
    head=NULL;
}
void List::Push(int x)
{
    if (head==NULL)
    {
        head=new Node;
        head->number=x;
        head->prev=NULL;
        head->next=NULL;
        tail=head;
    }
    else
    {
        Node* temp=new Node;
        temp->number=x;
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
        temp->next=NULL;
    }
}
void List::Pop()
{
    if(tail->prev!=NULL)
    {
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete temp;
    }
    else
    {
        Node* temp=tail;
        delete temp;
        head=NULL;
        tail=NULL;
    }
}
    
        
void List::Print()
{
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<"       "<<" [ "<<temp->number<<" ] ";
        temp=temp->next;
    }
}
bool List::Empty()
{
    if (head==NULL)
        return true;
    else
        return false;
}

