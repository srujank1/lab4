#include "LineList.h"
#include <cstddef>

LineList::LineList()
{
    next =NULL;
    lineNum =0;
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
void LineList::Clear(LineList *node)
{
     LineList *NEXT;
     while (node != NULL)
    {
        NEXT = node;
        node = node->next;
        delete(NEXT);

    }
}

