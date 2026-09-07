#include<stdio.h>
int main()
{
    int i, n, sum=0;

    printf("ENTER THE VALUE OF THE NUMBER\n");
    scanf("%d", &n);

    for(i=1; i<=n; i=i+1)
    {
        sum=sum+1;
    }

    printf("THE VALUE OF SUM IS %d\n", sum);
}