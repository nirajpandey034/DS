#include <stdio.h>
int main()
{
    char a[5] = "Knot";
    char *ptr = &a[1];

    char *ptr1;
    ptr1 = ptr + 3;
    *ptr1 = 101;
    for (int i = 0; i < 4; i++)
    {
        printf("%c", *ptr++);
    }

    return 0;
}