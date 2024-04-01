#include <iostream>
#include <conio.h>

using namespace std;


struct node
{
    int data;
    node* blink;
    node* flink;
};
node* list = NULL;
node* l1 = NULL;
node* l2 = NULL;

void dumplist(node* list)
{
    int i=1;
    node* ylist=list;
    if(list!=NULL)do{
        cout<<"Listenin "<<i++<<".Nodunun Adresi="<<list
                                     <<" Datasi= "<<list->data
                                     <<" BLinki= "<<list->blink
                                     <<" FLinki= "<<list->flink<<endl;
        list=list->flink;
        }while(list!=ylist);       
}    
 
node* newnode()
{
    node* newnode=new node;
    newnode->blink=newnode;
    newnode->flink=newnode;
    return(newnode);
}

node* last(node* list)
{
 node* last=NULL;
 if(list!=NULL)last=list->blink;
 return(last);
}

void addhead(node* node_, node*& list)
{
if(list!=NULL){node* ydk;
          ydk=last(list);
          node_->flink=list;
          list->blink=node_;
          node_->blink=ydk;
          ydk->flink=node_;
          }
list=node_;
}

void concatenate(node*& l1, node* l2)
{
if(l2!=NULL)
if(l1==NULL) l1=l2;
      else{
         node* ydk=last(l2);
         l2->blink=last(l1);
         last(l1)->flink=l2;
         l1->blink=ydk;
         ydk->flink=l1;
         }
}

node* cons(int data_)
{
node* cons_;
cons_=newnode();
cons_->data=data_;
return(cons_);
}

node* copy(node* list)
{
node* suret=NULL;
node* ylist=list;
if(list!=NULL)do{
          concatenate(suret,cons(list->data));
          list=list->flink;
          }while(list!=ylist);
return(suret);
}                                           
