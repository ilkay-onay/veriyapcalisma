#include <bbdol.h>
#include <time.h>

int terstensirala(node*& liste)
{
    node* prev = NULL;
    node* current = liste;
    node* next = NULL;
    while (current != NULL) {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    liste = prev;
}
int main()
{
node* liste = NULL;
addhead (newnode(),liste);
liste->data = 10;
addhead (newnode(),liste);
liste->data = 20;
addhead (newnode(),liste);
liste->data = 30;
addhead (newnode(),liste);
liste->data = 40;
addhead (newnode(),liste);
liste->data = 50;
addhead (newnode(),liste);
liste->data = 60;
dumplist(liste);
cout << "-------------------------------------------" << endl;
terstensirala(liste);
dumplist(liste);
system("pause");
return 0;
}
