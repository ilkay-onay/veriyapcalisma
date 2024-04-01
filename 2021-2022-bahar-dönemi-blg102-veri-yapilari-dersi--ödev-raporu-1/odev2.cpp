#include <bbdol.h>
#include <time.h>

using namespace std;

int say(node* list)
 {
 int gelen=1;

  while(list!=NULL)
   {
   list = list -> link;
   gelen +=1;
   }
return(gelen);
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
