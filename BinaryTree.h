#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Token.h"
#include "common.h"
#include <string>

struct TreeNode
{
    string id();
    //need a value thing
    TreeNode *left;
    TreeNode *right;
};

class BinaryTree
{
    private:
        TreeNode *root;

    public:
        BinaryTree();
        ~BinaryTree();
        bool isEmpty();
        TreeNode *SearchTree(Token *node);
        int Insert(TreeNode *newNode);
    private:
        void Clear(TreeNode *node);
};

#endif // BINARYTREE_H
