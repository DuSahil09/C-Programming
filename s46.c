#include <stdio.h> 
int main() 
{ 
float array1[2][2], array2[2][2], array3[2][2]; 
int i, j; 
printf("Enter elements for array 1 \n"); 
for(i=0; i<2; ++i) 
for(j=0; j<2; ++j) 
{ 
printf("Enter a%d%d: ", i+1, j+1); 
scanf("%f", &array1[i][j]); 
} 
printf("Enter elements for array 2\n"); 
for(i=0; i<2; ++i) 
for(j=0; j<2; ++j) 
{ 
printf("Enter b%d%d: ", i+1, j+1); 
scanf("%f", &array2[i][j]); 
} 
for(i=0; i<2; ++i) 
for(j=0; j<2; ++j) 
{ 
array3[i][j] = array1[i][j] + array2[i][j]; 
} 
printf("\nSum of the two matrix:\n"); 
 
for(i=0; i<2; ++i) 
for(j=0; j<2; ++j) 
{ 
printf("%.1f\t", array3[i][j]); 
if(j==1) 
printf("\n"); 
} 
return 0; 
} 