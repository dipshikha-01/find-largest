
/* c program to find largest from three numbers given by user to explain working of if-else-if statement or ladder */
#include<stdio.h>
int main ()
{
    int a,b,c ;
    printf ("enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b , a>c)
    {
        printf("%d is the largest number among three",a);
    }
    else if (b>a , b>c)
    {
        printf("%d is the largest number among three",b);
    }
    else
    {
        printf("%d is the largest number among three",c);
    }
    return 0;
}