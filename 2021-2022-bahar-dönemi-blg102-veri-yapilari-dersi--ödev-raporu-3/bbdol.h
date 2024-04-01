#include <iostream>
#include <conio.h>

using namespace std;

struct node
     {
     int data;
     node* link;
     };
node* list = NULL;
node* l1 = NULL;
node* l2 = NULL;
//1
void dumplist(node* list)
{
int i=1;

while(list!=NULL)
  {
  cout << "Listenin " << i++ << ".Nodunun Adresi=" << list
                           << " Datasi= " << list -> data 
                           << " Linki= " << list -> link << endl; 
  list = list -> link;
  }
}  

//2
node* newnode()
{
node* newnode = new node;
newnode -> link = NULL;
return(newnode);
}
//3
node* last(node* list)
{
if(list != NULL)
while(list->link!=NULL)
  list = list -> link;
node* last = list;
return(last);
}
//4
void addhead(node* node_, node*& list)
{
node_->link=list;
list=node_;
}
//5
void concatenate(node*& l1, node* l2)
{
if(l1==NULL) l1=l2;
else last(l1)->link=l2;
}
//6
node* cons(int data_)
{
node* cons_;
cons_= newnode();
cons_-> data=data_;
return (cons_);
}
//7
node* copy(node* list)
{
node* suret=NULL;
if(list != NULL)
do{ 
concatenate(suret,cons(list->data));
list=list->link;
}
while(list!=NULL);
return(suret);
}
//8
node* locate(int data_,node* list)
{
node* locate = NULL;
while(list!= NULL)
  if(list->data!=data_)
  list=list->link;
  else{
      locate=list;
      break;
      } 
return(locate);
}
//9
bool member(node* node_,node* list)
{
while(list!=NULL && list!=node_)
list=list->link;
bool member=(list==node_);
return(member);
}   
//10
node* cuthead(node *& list)
{
node* cuthead = list;
if(list!=NULL)
{
list=list->link;
cuthead->link=NULL;
}
return(cuthead);
}
//11
void free(node*& list)
{
delete list;
}
bool advance(node*&point)
{
bool advance=false;
if((point!=NULL)&&(point->link!=NULL)){
    point=point->link;
    advance=true;
    }
return(advance);
}
//12
bool deletenode(node* node_, node*& list)
{
bool deletenode=false;
if(list==NULL)
return(deletenode);
if(list==node_)
{
free(cuthead(list));
deletenode=true;
return(deletenode);
}
else
{
node* point=list;
do{
if(point->link==node_){
free(cuthead(point->link));
deletenode=true;
return(deletenode);
}
}while(advance(point));
}
}
