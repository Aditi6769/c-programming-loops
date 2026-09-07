#include<stdio.h>
int main()

{
    int i, n;

    printf("PLEASE ENTER THE VALUE OF THE NUMBER\n");
    scanf("%d", &n);

    for(i=1; i<=n; i=i+1)
    {printf("%d\n", i);};
}