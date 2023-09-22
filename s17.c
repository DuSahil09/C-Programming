#include <stdio.h> 
int main() 
{ 
 int i, j, input; 
 char alphabet = 'A'; 
 printf("Enter a number to define the rows: "); 
 scanf("%d", &input); 
 for (i = input; i >= 1; i--) 
 { 
 for (j = 1; j <= i; ++j) 
 { 
 printf("%c ", alphabet); 
 } 
 ++alphabet; 
 printf("\n"); 
 } 
 return 0; 
} 
