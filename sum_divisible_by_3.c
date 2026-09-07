#include<stdio.h>
int main()

{
    int i, n, sum=0;

    printf("SUM OF INTERGERS DIVISIBLE BY 3 FROM 1 TO 100 IS\n");

    for(i=1; i<=100; i++)
    {
       if(i%3==0)
       sum=sum+i;
       
    }
    printf("%d", sum);

}