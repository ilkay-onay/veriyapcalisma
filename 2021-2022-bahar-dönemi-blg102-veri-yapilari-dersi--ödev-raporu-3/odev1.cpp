#include <iostream>
#include <conio.h>

using namespace std;

void tersyerlestir(int* veri)
{
 int temp;
 for(int i=0;i<5;i++)
  {
   temp = *(veri+i);
   *(veri+i) = *(veri+9-i);
   *(veri+9-i) = temp;
  }      
}
