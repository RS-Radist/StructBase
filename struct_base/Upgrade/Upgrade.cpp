#include "Upgrade.hpp"
#include "Abstract.hpp"

void Display()
{
    cout<<"*******STRUCT-BASE*******\n";
    cout<<"1)DynamicArray\n";
    cout<<"2)Stack\n";
    cout<<"3)List\n";
    cout<<"4)Queue\n";
}
void Display2()
{
    cout<<"1)Push(int number) - Push elements to the struct base\n";
    cout<<"2)Pop() - Delete element to the array\n";
    cout<<"3)Print() - Show element\n";
    cout<<"4)Выбрать другую структору\n";
}
int Restart(int& action,int size)
{
    do
    {
        cin>>action;
        if(action<size+1)
        {
            break;
        }
        else
            cout<<"Restart\n";
        
    }while(action>=size+1);
    return action;
}
void MenuCut (int& action,Abstract** base,int insert,char tempChoose,string status)
{
    do
    {
        cout<<status;
        Display2();
        cin>>action;
        switch (action)
        {
            case 1:
            {
                do
                {
                    int number;
                    cout<<"Choose the number to add = ";
                    cin>>number;
                    base[insert]->Push(number);
                    cout<<"Go on Adding? y/n";
                    cin>>tempChoose;
                }while(tempChoose=='y'||tempChoose=='Y');
            }
                break;
                
            case 2:
            {
                do
                {
                    cout<<"Delete item? y/n";
                    cin>>tempChoose;
                    if (tempChoose=='y'||tempChoose=='Y')
                    {
                        if (!base[insert]->Empty())
                        {
                            base[insert]->Pop();
                            cout<<"Item deleted\n";
                        }
                        else
                        {
                            cout<<"The Struct base is empty\n";
                        }
                    }
                }while(tempChoose=='y'||tempChoose=='Y');
            }
                break;
            case 3:
            {
                base[insert]->Print();
                cout<<endl;
            }
                break;
            case 4:
            {
                tempChoose=' ';
                break;
            }
        }
    }while(tempChoose=='n'||tempChoose=='N');
}
