#include<stdio.h> 
#include<string.h> 
int main() 
{ 
 char strg1[] = "Sumit"; 
 char strg2[] = "Avinash"; 
 int res = strcmp(strg1, strg2); 
 if (res==0) 
 printf("Strings are equal"); 
 else 
 printf("Strings are unequal"); 
 
 printf("\nValue of result: %d" , res); 
 return 0; 
} 
