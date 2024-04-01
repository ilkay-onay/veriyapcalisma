#include <iostream>
#include <conio.h>
using namespace std;

struct node
{
int data;
node* link;
};

node* list=NULL;
node* l1=NULL;
node* l2=NULL;
//1
void dumplist(node* list)
{
if(list!=NULL)
{
int i=1;
node* ylist=list;
do{
     cout<<"Listenin " <<i++<<".Nodunun Adresi= "<<list
                            <<"Datasi = "<<list ->data
                            <<"Linki="<<list->link<<endl;
     list=list->link;
     }while(list!=ylist);
 }
}
//2
node* newnode()
{
node* newnode= new node;
newnode->link= newnode;
return(newnode);
}      
//3
node* last(node* list)
{
if(list!=NULL){
    node* ylist=list;
    while(list->link!=ylist)
    list=list->link;
    }
node* last=list;
return(last);
}
//4
void addhead(node* node_,node*& list)
{
if(list==NULL)list=node_;
else{node_->link=list;
     last(list)->link=node_;
     list=node_;
 }
}
//5
void concatenate(node*& l1,node* l2)
{
if(l2!=NULL)
if(l1==NULL) l1=l2;
   else{
       last(l1)->link=l2;
       last(l2)->link=l1;
   }
}
//6
node* cons(int data_)
{
node* cons_;
cons_=newnode();
cons_->data=data_;
return(cons_);
}
//7
node* copy(node* list)
{
node* suret=NULL;
node* ylist=list;
if(list!=NULL)
do{
concatenate(suret,cons(list->data));
list=list->link;
}
while(list!=ylist);
return(suret);
}
//8
node* locate(int data_, node* list)
{
  node* locate=NULL;
  if(list!=NULL){
      node* ylist=list;
       do{
           if(list->data!=data_) list=list->link;
           else{
               locate=list;
               break;
               }
      }while(list!=ylist);
     }
return(locate);
}                         
