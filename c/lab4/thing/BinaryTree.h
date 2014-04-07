#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Token.h"

struct TreeNode
{
    Token *node;
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
