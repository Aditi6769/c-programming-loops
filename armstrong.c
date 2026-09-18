#include<stdio.h>
int main()

{
    int n, i, c, number, sum;
    sum=0;

    printf("PLEASE ENTER THE VALUE OF THE NUMBER\n");
    scanf("%d", &n);

    number=n;

    while(n>0)
    {
      i=n%10;
      c=i*i*i;
      sum=sum+c;
      n=n/10;
    }

    if(number==sum)
    printf("THE NUMBER IS AN ARMSTRONG NUMBER\n");
    else
    printf("THE NUMBER IS NOT AN ARMSTRONG NUMBER\n");
}