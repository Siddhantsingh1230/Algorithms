#include <stdio.h>

void fibonacci(int num)
{
    if (num > 0)
    {
        if (num == 1)
        {
            printf("0");
            return;
        }
        else if (num == 2)
        {
            printf("0 1");
            return;
        }
        int a = 0;
        int b = 1;
        int c;
        printf("%d %d", a, b);
        while (num-2 > 0)
        {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
            num--;
        }
    }
}

int main()
{
    int num = 15;
    fibonacci(num);
    return 0;
}