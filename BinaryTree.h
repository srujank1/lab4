#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Token.h"
#include "common.h"
#include <string>



class BinaryTree
{
    private:
        Token *root;

    public:
        BinaryTree();
        ~BinaryTree();
        bool isEmpty();
        int Insert(Token *newTok);
        void PrintOne(Token *T);
        void PrintAll(Token *T);
        void PrintTree();
    private:
        void Clear(Token *node);
};

#endif // BINARYTREE_H
