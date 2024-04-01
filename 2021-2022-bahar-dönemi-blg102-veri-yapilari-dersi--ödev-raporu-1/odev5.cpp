#include <bbdal.h>
#include <time.h>

using namespace std;

int say(node* list)
 {
 int i = 1;
if(list!=NULL)
{
node* ylist=list;
do{
    i=i+1;
    list=list->link;
}
while(list!=ylist);
}
cout << i << endl;
return(i);
 }  

int liste_yap(node*& node_)
{
 srand (time(NULL));
 int nosayi;
 nosayi = say(node_);
 for(int i=1;i<=nosayi;i++)
  {
   addhead (newnode(),node_);
   node_ -> data = rand()%450 + 50;
  }
}

int main()
{
node* liste = NULL;
addhead (newnode(),liste);
addhead (newnode(),liste);
addhead (newnode(),liste);
addhead (newnode(),liste);
addhead (newnode(),liste);
addhead (newnode(),liste);
addhead (newnode(),liste);

liste_yap(liste);
dumplist(liste);
system("pause");
return 0;
}
