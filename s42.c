#include <stdio.h> 
int main() 
{ 
 int i, space, rows, k, m = 1; 
 printf (" Enter the number of rows: \n"); 
 scanf ("%d", &rows); 
 printf("\n"); 
 for ( i = rows; i >= 1; i--) 
 { 
 for ( space = 1; space <= m; space++) 
 { 
 printf (" "); 
 } 
 for ( k = 1; k <= ( 2 * i - 1); k++) 
 { 
 printf ("%d ", i); 
 } 
 m++; 
 printf ("\n"); 
 } 
 return 0; 
} 
