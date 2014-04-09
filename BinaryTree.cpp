#include "BinaryTree.h"
#include "Token.h"

BinaryTree::BinaryTree()
{
    root=NULL;
}

BinaryTree::~BinaryTree()
{
    Clear(root);
}

void BinaryTree::Clear(Token *node)
{
    if(node==NULL) return;  // Nothing to clear
    if(node->getLeft() != NULL) Clear(node->getLeft()); // Clear left sub-tree
    if(node->getRight() != NULL) Clear(node->getRight()); // Clear right sub-tree
    delete node;    // Destroy this node
    return;
}

bool BinaryTree::isEmpty()
{
    return(root==NULL);
}

int BinaryTree::Insert(Token *newTok)
{
    if(root==NULL){
        root=newTok;
    }else{
        Token *current=root;
        while(current=NULL){
            if(newTok->getTokenString().compare(current->getTokenString())){
                if(current->getLeft() != NULL){
                    current->setLeft(current);
                }
            }else{
                current->setLeft(newTok);
                current=NULL;
            }

        }
    }
}


