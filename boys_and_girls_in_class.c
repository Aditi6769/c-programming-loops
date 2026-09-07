#include<stdio.h>
int main()
{
    char n;
    int i, f=0, m=0;

    printf("ENTER THE GENDER OF THE STUDENT (f/m)\n");

    for(i=1; i<=10; i++)
    {
        scanf(" %c", &n);

        if(n=='f')
        f++;
        if(n=='m')
        m++;

    }
 
    printf("THE NUMBER OF GIRLS AND BOYS IN THE CLASS IS %d AND %d", f, m);
}