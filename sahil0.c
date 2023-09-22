
#include <stdio.h> 
#include <math.h> 
;int main() 
{ 
 float principal, rate, time, CI, amount; 
 printf("Enter The Principal Amount: \n"); 
 scanf("%f", &principal); 
 printf("Enter Rate of Interest: \n"); 
 scanf("%f", &rate); 
 printf("Enter Time Period(in years): \n"); 
 scanf("%f", &time); 
 amount = principal * (pow((1 + rate/100), time)); 
 CI = amount - principal; 
 printf("Compound Interest is %.2f", CI); 
 return 0; 
} 