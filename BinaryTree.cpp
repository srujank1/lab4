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

int BinaryTree::Insert(TreeNode *newNode)
{
    TreeNode *temp;
    TreeNode *back;

    temp = root;
    back = NULL;

    while(temp != NULL) // Loop till temp falls out of the tree
    {
        back = temp;
        if((newNode->id).compare(temp->id)<0)
            temp = temp->left;
        else
            temp = temp->right;
    }

    // Now attach the new node to the node that back points to
    if(back == NULL) // Attach as root node in a new tree
        root = newNode;
    else
    {
        if((newNode->id).compare(back->id)<0)
            back->left = newNode;
        else
            back->right = newNode;
    }
   return(true);
}
