#include <stdio.h> 
int main() 
{ 
 int array[10], size, i, element, count = 0; 
 printf("Enter size of the array : \n"); 
 scanf("%d", &size); 
 printf("Enter any %d integer values : \n", size); 
 for (i = 0; i < size; i++) 
 scanf("%d", &array[i]); 
 printf("Enter the element to be search : \n"); 
 scanf("%d", &element); 
 for (i = 0; i < size; i++) 
 { 
 if (array[i] == element) 
 { 
 printf("%d is present at location %d.\n", element, i+1); 
 count++; 
 } 
 } 
 if (count == 0) 
 printf("%d isn't present in the array.\n", element); 
 else 
 printf("%d is present %d times in the array.\n", element, count); 
 return 0; 
} 