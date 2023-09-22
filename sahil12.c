#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
 int n, i, sum = 0, dev_arr[n]; 
 float avg = 0; 
 printf("Please Enter the Array size = "); 
 scanf("%d", &n); 
 int arr[n]; 
 printf("Enter the Array Elements : "); 
 for (i = 0; i < n; i++) 
 { 
 scanf("%d", &arr[i]); 
 } 
 for (i = 0; i < n; i++) 
 { 
 sum+=arr[i]; 
 } 
 avg = (float)sum / n; 
 printf("\nThe Average of Array Elements = %.2f\n", avg); 
 for (i=0;i<n;i++) 
 { 
 dev_arr[i]= abs(arr[i]-avg); 
 printf ("Deviation from average %d\n",dev_arr[i]); 
 } 
 return 0; 
}