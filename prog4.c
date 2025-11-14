#include<stdio.h>

int main()
{
    int *p1, *p2;

    int a,b;
    printf("Enter value a: ");
    scanf("%d",&a);

    printf("Enter value b: ");
    scanf("%d",&b);

    p1=&a;
    p2=&b;

    printf("\nBefore swapping value of 'a': %d",*p1);
    printf("\nBefore swapping value of 'b': %d\n",*p2);

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    printf("\nAfter swapping value of 'a': %d",*p1);
    printf("\nAfter swapping value of 'b': %d",*p2);

    return 0;
}
