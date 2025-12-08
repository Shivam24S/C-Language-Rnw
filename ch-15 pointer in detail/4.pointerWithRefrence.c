

#include <stdio.h>

void change(int *num)
{

    *num = 50;
}

int main()
{

    int num = 24;

    change(&num);

    printf("%d", num);

    return 0;
}