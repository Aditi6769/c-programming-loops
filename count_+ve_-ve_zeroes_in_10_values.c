#include<stdio.h>
int main()
{
    int i, n, p=0, m=0, z=0;

    printf("ENTER THE VALUE OF THE NUMBERS\n");

    for(i=1; i<=10; i++)
    {
        scanf("%d", &n);

        if(n>0)
        {p++;}
        if(n<0)
        {m++;}
        if(n==0)
        {z++;}
    }

    printf("NUMBER OF POSITIVE VALUES IS %d\n", p);
    printf("NUMBER OF NEGATIVE VALUES IS %d\n", m);
    printf("NUMBER OF ZEROS ARE %d\n", z);
}