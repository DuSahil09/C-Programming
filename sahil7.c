#include <stdio.h> 
int main() 
{ 
 int day; 
 printf(" Please Enter the Day Number 1 to 7 (where 1 = Monday) : "); 
 scanf("%d", &day); 
 switch (day) 
 { 
 case 1: 
 printf("\n Monday"); 
 break; 
 case 2: 
 printf("\n Tuesday"); 
 break; 
 case 3: 
 printf("\n Wednesday"); 
 break; 
 case 4: 
 printf("\n Thursday"); 
 break; 
 case 5: 
 printf("\n Friday"); 
 break; 
 case 6: 
 printf("\n Saturday"); 
 break; 
 case 7: 
 printf("\n Sunday"); 
 break; 
 default: 
 printf("\n Please enter Valid Number between 1 to 7"); 
 } 
 return 0; 
}