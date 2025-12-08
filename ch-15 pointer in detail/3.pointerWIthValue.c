

#include <stdio.h>

void Change(int num)
{

    num = 50;
}

int main()
{

    int num = 24;

    Change(num);

    printf("%d", num);

    return 0;
}