#include <stdio.h> 
int main() 
{ 
 int array[10], size, i, element, low, high, mid; 
 printf("Enter size of the array : \n"); 
 scanf("%d", &size); 
 printf("Enter any %d integer values : \n", size); 
 for (i = 0; i < size; i++) 
 scanf("%d", &array[i]); 
 printf("Enter the element to be search : \n"); 
 scanf("%d", &element); 
 low = 0; 
 high = size - 1; 
 mid = (low+high)/2; 
 while (low <= high) 
 { 
 if (array[mid] < element) 
 low = mid + 1; 
 else if (array[mid] == element) 
 { 
 printf("%d found at location %d.\n", element, mid+1); 
 break; 
 } 
 else 
 high = mid - 1; 
 mid = (low + high)/2; 
 } 
 if (low > high) 
 printf("Not found! %d isn't present in the list.\n", element); 
 
 return 0; 
} 