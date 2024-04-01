#include <iostream>
#include <conio.h>
#include <bbdol.h>

using namespace std;

int main()

{
node maas;
maas.data = 100;
maas.link = NULL;
dumplist(&maas);
system("pause");
return 0;
}

