#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[10][30];
    int count, j = 0, flag = 1, t, i;
    int t1[4];
    char *a;
    for (int i = 0; i < 3; i++)
    {
        gets(str[i]);
    }

    while (j < 3)
    {
        count = 0;
        i = 0;
        for (int k = 0; k < 4; k++)
        {
            t1[k] = 0;
        }
        a = strtok(str[j], ".");
        while (a != NULL)
        {
            t = atoi(a);
            count++;
            if (t >= 0 && t <= 255)
            {
                t1[i] = t;
                i++;
            }
            a = strtok(NULL, ".");
        }
        if (count == 4)
        {

            for (int v = 0; v < 4; v++)
            {
                printf("%d ", t1[v]);
            }
            printf("\n");
        }
        j++;
    }

    return 0;
}