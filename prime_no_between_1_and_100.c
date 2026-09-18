#include<stdio.h>
int main()
{
    int i, j;
    printf("THE PRIME NUMBERS BETWEEN 1 AND 100 ARE: \n");

    for(i=2; i<=100; i++)
    {
       for(j=2; j<i; j++)
       {
        if(i%j==0)
        break;
       }
       if(j==i)
       printf("%d ,", i);
    }
}