#include <stdio.h>

int main()
{
    int y = 20;
    for (int i = 0; i <= 10; i++, y--)
    {
        printf("i: %d, y: %d\n", i, y);
    }

    return 0;
}
