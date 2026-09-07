#include<stdio.h>
int main()

{
    int i, n;

    printf("PLEASE ENTER THE VALUE OF THE NUMBER\n");
    scanf("%d", &n);
    printf("THE FIRST %d EVEN NUMBERS ARE\n", n);

    for(i=0; i<=2*n; i=i+2)
    {printf("%d\n", i);};
}