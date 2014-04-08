#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
    root=NULL;
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

/*
int BinaryTree::Insert(TreeNode *newNode)
{
    TreeNode *temp;
    TreeNode *back;

    temp = root;
    back = NULL;

    while(temp != NULL) // Loop till temp falls out of the tree
    {
        back = temp;
        if((newNode->TNode->literal).compare(temp->TNode->literal)<0)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if(back == NULL) // Attach as root node in a new tree
        root = newNode;
    else
    {
        if((newNode->TNode->literal).compare(back->TNode->literal)<0)
            back->left = newNode;
        else
            back->right = newNode;
    }
   return(true);
}
*/
int BinaryTree::Insert(string sentID)
{
    TreeNode *newNode;

    // Create the new node and copy data into it
    newNode = new TreeNode();
    strcpy(newNode->id.c_str(), sentID.c_str());
    newNode->left = newNode->right = NULL;

    // Call other Insert() to do the actual insertion
    return(Insert(newNode));
}
