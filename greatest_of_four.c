#include <stdio.h>

int main()
{
    int a, b, c, d;
    int greater;
    printf("please enter any 4 no. of yor choice\n");
    scanf("%d"
          "%d"
          "%d"
          "%d",
          &a, &b, &c, &d);
    // greater()
    if (a > b)  
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is big", a);
            }
            else
            {
                printf("%d is big", d);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%d is big", b);
        }
        else
        {
            printf("%d is big", d);
        }
    }
    else if (c > d)
    {
        printf("%d is big", c);
    }
    else
    {
        printf("%d is big", d);
    }

    return 0;
}