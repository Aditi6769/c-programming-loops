#include<stdio.h>
int main()
{
    int number, n, i, og;
    i=0;


    printf("PLEASE ENTER THE VALUE OF THE NUMBER\n");
    scanf("%d", &n);

    og=n;

    while(n>0)
    {
        number=n%10;
        i=i*10+number;
        n=n/10;    
    }

    if(i==og)
    printf("THE NUMBER IS A PALINDROME\n");
    else
    {
        printf("THE NUMBER IS NOT A PALINDROME\n");
    }


}