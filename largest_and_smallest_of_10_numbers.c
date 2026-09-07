#include<stdio.h>
int main()

{
    int i, n, min=0, max=0;

    printf("ENTER THE VALUE OF 10 NUMBERS\n");

    for(i=1; i<=10; i++)
    {
        scanf("%d", &n);
        
        if(i==1)
        {
            min=n;
            max=n;
        }
        if(n<min)
        {min=n;}
        if(n>max)
        {max=n;}



    }

    printf("THE LARGEST NUMBER IS %d\n", max);
    printf("THE SMALLEST NUMBER IS %d\n", min);
}