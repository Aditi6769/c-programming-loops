#include<stdio.h>
int main()
{
    int number, i, n;

    printf("ENTER THE VALUE OF THE NUMBER\n");
    scanf("%d", &n);

    

     for (i = 1; i <= n; i++)
     {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }


}