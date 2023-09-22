#include<stdio.h>
int main()
{
int age, marks;
printf("Enter your age\n");
scanf("%d",&age);
printf("Enter yuor marks\n");
scanf("%d",&marks);
switch (age)
{
case 3:
    printf("The age is 3\n");
    switch (marks)
    {
    case 45:
        printf("Your marks are 45");
        break;
    
    default:
    printf("Your marks are not 45\n");

    }
    break;
case 13:
    printf("The are is 13\n");
    break;
case 23:
    printf("The are is 23\n");
    break;

default:
    printf("Are is not 3,13 and 23\n");
}
return 0;
}