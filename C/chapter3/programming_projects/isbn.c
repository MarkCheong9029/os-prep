/*Programming project 3*/

#include <stdio.h>

int main(void)
{
    int gs1, gi, code, item_number, check_digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &gi, &code, &item_number, &check_digit);
    printf("GS1 Prefix: %d\n", gs1);
    printf("Group Identifier: %d\n", gi);
    printf("Publisher Code: %d\n", code);
    printf("Item Number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);
}