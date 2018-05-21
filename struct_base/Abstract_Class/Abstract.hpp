#ifndef Abstract_hpp
#define Abstract_hpp

#include <stdio.h>
class Abstract
{
public:
    virtual void Push(int x)=0;
    virtual void Pop()=0;
    virtual void Print()=0;
    virtual bool Empty()=0;
};
#endif /* Abstract_hpp */
