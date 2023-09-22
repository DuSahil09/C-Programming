#include <stdio.h> 
int main() 
{ 
 int i,size; 
 printf("Enter size of array :"); 
 scanf("%d",&size); 
 int array[size]; 
 for(i=1;i<=100;i++) 
 { 
 array[i] = i; 
 printf("%d\t",array[i]); 
 } 
 return 0; 
}