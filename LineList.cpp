#include "LineList.h"


LineList::LineList()
{
    next =NULL;
    lineNum =NULL:
}

LineList::~LineList()
{
    Clear(next);

}

int LineList::getlineNum()
{
    return lineNum;
}

LineList* LineList::getLineList()
{
    return next;
}

void LineList::setLineNum(int x)
{
    lineNum =x;
}

void LineList::setLineList(LineList *LL)
{
     next = LL;
}

