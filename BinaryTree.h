#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Token.h"
#include "common.h"
#include <string>

//What is the TreeNode storing?


class BinaryTree
{
    private:
        Token *root;

    public:
        BinaryTree();
        ~BinaryTree();
        bool isEmpty();
        //TreeNode *SearchTree(Token *node);    //imlement later
        int Insert(Token *newTok);
    private:
        void Clear(Token *node);
};

#endif // BINARYTREE_H
