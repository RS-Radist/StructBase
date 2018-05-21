//  22.04.2018
//  struct_base
//  Created by MacBook on 22.04.18.
//  Copyright © 2018 Crimea. All rights reserved.
//  Dev (Loskutov Rodion)
//  codelr2017@gmail.com
//  Crimea Simferopol
#include <iostream>
#include "Abstract_Class/Abstract.hpp"
#include "dynamic_array.hpp"
#include "Stack.hpp"
#include "List.hpp"
#include "Upgrade/Upgrade.hpp"
#include "Queue.hpp"
using namespace std;

int main()
{
    int action;
    char tempChoose = '\0';
    int serial_number;
    int size_base=4;
    Abstract * base[size_base];
    base[0]=new DynamicArray;
    base[1]=new Stack;
    base[2]=new List;
    base[3]=new Queue;
    do
    {
    Display();
        switch (Restart(action,size_base))
        {
            case 1:
            {
                MenuCut(action, base, 0, tempChoose,"...........DYNAMiC ARRAY.........\n");
            }
                break;
            case 2:
            {
                MenuCut(action, base, 1, tempChoose,"..............STACK..............\n");
            }
                break;
            case 3:
            {
                MenuCut(action, base, 2, tempChoose,"..............LIST...............\n");
            }
                break;
            case 4:
            {
                MenuCut(action, base, 3, tempChoose, ".............QUEUE..............\n");
            }
                break;
        }
        serial_number=10;
    }while (serial_number==10);
}

