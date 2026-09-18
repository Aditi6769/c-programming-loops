#include<stdio.h>
int main()
{
    int n, sum, i;
    sum=0;

    printf("PLEASE ENTER THE VALUE OF THE NUMBER\n");
    scanf("%d", &n);

   if(n==0)
   printf("THE SUM OF THE DIGITS IS 0\n");
   
   else 
   { while(n>0)
    { 
      i=n%10;
      sum=sum+i;
      n=n/10;

    }
    printf("THE SUM OF THE DIGITS IS %d", sum);
   }
}