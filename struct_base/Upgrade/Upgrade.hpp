#ifndef Upgrade_hpp
#define Upgrade_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Abstract.hpp"

using namespace std;
void Display();
void Display2();
int Restart(int& action,int size);
void MenuCut (int& action,Abstract** base,int insert,char tempChoose,string status);

#endif /* Upgrade_hpp */
