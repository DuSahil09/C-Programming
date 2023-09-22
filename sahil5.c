#include <stdio.h> 
int main() 
{ 
 int i,size,n; 
 printf("Enter size of array :"); 
 scanf("%d",&size); 
 
 int array[size]; 
 printf("Enter Numbers to be printed :"); 
 scanf("%d",&n); 
 for(i=1;i<=n;i++) 
 { 
 array[i] = i; 
 printf("%d\t",array[i]); 
 } 
 return 0; 
}