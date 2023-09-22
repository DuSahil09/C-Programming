#include <stdio.h> 
int main() 
{ 
 int x=10; //integer variable 
 int *ptrX; //integer pointer declaration 
 ptrX=&x; //pointer initialization with the address of x 
 
 printf("Value of x: %d\n",*ptrX); 
 return 0; 
} 