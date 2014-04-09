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

};


#endif // LINELIST_H
