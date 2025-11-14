#include <stdio.h>

void swap(int *p1, int *p2)
{
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
}

int main()
{
    int a, b;

    printf("Enter value a: ");
    scanf("%d", &a);

    printf("Enter value b: ");
    scanf("%d", &b);

    printf("\nBefore swapping value of a: %d", a);
    printf("\nBefore swapping value of b: %d\n", b);

    swap(&a, &b);

    printf("\nAfter swapping value of a: %d", a);
    printf("\nAfter swapping value of b: %d\n", b);

    return 0;
}

