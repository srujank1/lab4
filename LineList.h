#ifndef LINELIST_H
#define LINELIST_H



class LineList{
    private:
        int lineNum;
        LineList *next;
    public:
        int getlineNum();
        LineList* getLineList();
        void setLineNum(int x);
        void setLineList(LineList *LL);
        void Clear(LineList *node);

};


#endif // LINELIST_H
