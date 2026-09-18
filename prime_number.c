#include<stdio.h>
int main()
{
    int n, i;

    printf("PLEASE ENTER THE VALUE OF THE NUMBER\n");
    scanf("%d", &n);

    
    if(n==0 || n==1)
    
    {
        printf("THE NUMBER IS NOT A PRIME NUMBER\n");
        return 0;
    }

     for (i = 2; i < n; i++) {
        if (n % i == 0) {
            break;
        }
    }

    if (i == n) {
        printf("THE NUMBER IS A PRIME NUMBER\n");
    } else {
        printf("THE NUMBER IS NOT A PRIME NUMBER\n");
    }

    return 0;
}

 