#include <stdio.h> 
int main() 
{ 
 int i=0, sum=0, temp; 
 char arr[1000]; 
 printf("Input an integer\n"); 
 scanf("%s", arr); 
 while (arr[i] != '\0') 
 { 
 temp = arr[i] - '0'; 
 sum += temp; 
 i++; 
 } 
 printf("Sum of digits of %s = %d\n", arr, sum); 
 return 0; 
} 