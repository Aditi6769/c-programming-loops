#include<stdio.h>
int main()

{
    int i, n=0;

    printf("NUMBER OF INTEGERS DIVISIBLE BY 5 FROM 1 TO 100 is\n");

    for(i=1; i<=100; i++)
    {
        if(i%5==0)
        n++;
    }
    printf("%d", n);
}