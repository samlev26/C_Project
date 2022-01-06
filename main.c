#include <stdio.h>

void *reverse(int *a)
{
    (*a)++;
    printf("%d", *a);
}

int main(void)
{
    int p = 14;
    int *a;
    a = &p;
    reverse(a);
}