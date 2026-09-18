#include<stdio.h>
int main()

{ int number, digit, n;

    printf("PLEASE ENTER THE VALUE OF THE NUMBER\n");
    scanf("%d", &number);

    n=number;
    printf("digits of %d: ", number);

    if(n<0)
    {
        n=-n;
    }

    if(n==0)
    {
        printf("0\n");

    }
    else
    {
        while(n!=0)
        {
            digit=n%10;
            printf("%d, ", digit);
            n=n/10;

        }
    }
    printf("\n");
    
}