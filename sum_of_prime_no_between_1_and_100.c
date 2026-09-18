 #include <stdio.h>

int main() 

{
    int i, j, sum;

    sum=0;

    for (i = 2; i <= 100; i++) 
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0) 
            {
                break;
            }
        }

        if (j == i)
        {
            sum = sum + i;
        }
    }

    printf("SUM OF PRIME NUMBERS BETWEEN 1 AND 100: %d\n", sum);

}