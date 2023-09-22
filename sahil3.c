#include <stdio.h> 
int main() 
{ 
 char str[100]; 
 printf ("Enter your name : "); 
 scanf("%[^\n]s",str); 
 printf("Your name is : %s",str); 
 return 0; 
}