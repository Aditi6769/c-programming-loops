#include<stdio.h>
int main()

{
    int n, digits, count;
    count=0;
    printf("PLEASE ENTER THE VALUE OF THE NUMBER\n");
    scanf("%d", &n);

    if(n==0)
    {
        printf("Number of digits is 1\n");
    }
    else {
        while(n>0)
    {
        n=n/10;
        count=count+1;
    }

    printf("Number of digits is %d\n", count);
    };

}