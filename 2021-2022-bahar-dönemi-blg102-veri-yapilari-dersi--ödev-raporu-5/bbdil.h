#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct node {
    int data;
    struct node* llink,* rlink;
   };
   
node* root=NULL;

node* newnode()
{
 node* newnode=new node;
 newnode->llink=NULL;
 newnode->rlink=NULL;
 cin>>newnode->data;
 return(newnode);
}

void inserttree(node*& tree,node* node_)
{
    if(tree==NULL){
        tree=node_;
        return;
        }
     if(node_->data < tree->data)
       inserttree(tree->llink, node_);
     else
       if(node_->data > tree->data)
       inserttree(tree->rlink, node_);
}      

void printtree(node* tree)
{
    if(tree->llink!=NULL)
     printtree(tree->llink);
     
     cout << tree->data << endl;
     
    if(tree->rlink!=NULL)
     printtree(tree->rlink);
}

int counttree(node* tree)
{
    if(tree==NULL)return 0;
       else if(tree->llink==NULL && tree->rlink==NULL) return 1;
        else return(1 + counttree(tree->llink)+counttree(tree->rlink));
}
