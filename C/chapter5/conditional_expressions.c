#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 1;
    j = 2;
    k = i > j ? i : j; /*If i more than j, than k equals i else k equals j*/
    printf("%d\n", k);
}