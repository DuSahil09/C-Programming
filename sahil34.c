#include <stdio.h>
int main()
{
    int x, y;
    char input, alphabet = 'A';

    printf("Enter the uppercase character you want to print in last row: ");
    scanf("%c",&input);

    for(x=1; x <= (input-'A'+1); ++x)
    {
        for(y=1;y<=x;++y)
        {
            printf("%c", alphabet);
        }
        ++alphabet;

        printf("\n");
    }
    return 0;
}