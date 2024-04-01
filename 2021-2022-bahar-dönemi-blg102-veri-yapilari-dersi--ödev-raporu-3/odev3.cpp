#include <iostream>
#include <conio.h>
#include <ibdal.h>
using namespace std;

void donustur(node* nod)
{
if(nod!=NULL)
if(nod->flink = nod)
{
 nod->blink = NULL;  
 nod->flink = NULL;
}
else
{
last(nod)->flink=NULL;
nod->blink=NULL;
}
}

int main()

{
node* liste = NULL;
addhead(newnode(),liste);
system("pause");
return 0;
}
