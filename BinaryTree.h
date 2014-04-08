#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Token.h"
#include "common.h"
#include <string>

//What is the TreeNode storing?
struct TreeNode
{
    //need a value thing for the identifier
    //Token *TNode;
    string id();
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
        //TreeNode *SearchTree(Token *node);    //imlement later
        int Insert(TreeNode *newNode);
        int Insert(string sentID);
    private:
        void Clear(TreeNode *node);
};

#endif // BINARYTREE_H
