#include <stdio.h> 
#include <string.h> 
int main() 
{ 
 char arr[] = "Sahil"; 
 int len1, len2; 
 len1 = strlen (arr); 
 len2 = strlen ("Sahil_Khan"); 
 printf ("string = %s length = %d\n", arr, len1); 
 printf ("string = %s length = %d\n", "Sahil_Khan", len2); 
 return 0; 
}