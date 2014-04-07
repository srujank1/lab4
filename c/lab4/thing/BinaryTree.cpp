#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
    root=NULL;
    return;
}

BinaryTree::~BinaryTree()
{
    Clear(root);
}

void BinaryTree::Clear(TreeNode *node)
{
    if(node==NULL) return;  // Nothing to clear
    if(node->left != NULL) Clear(node->left); // Clear left sub-tree
    if(node->right != NULL) Clear(node->right); // Clear right sub-tree
    delete node;    // Destroy this node
    return;
}

bool BinaryTree::isEmpty()
{
    return(root==NULL);
}

