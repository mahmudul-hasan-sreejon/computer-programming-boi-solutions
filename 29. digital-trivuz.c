#include<stdio.h>
int main()
{
    int tc, i, d, s, j, k;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d %d", &d, &s);

        printf("Case %d:\n", i);
        for(j=1 ; j<=s ; j++)
        {
            for(k=1 ; k<=j ; k++)
            {
                printf("%d", d);
            }
                printf("\n");
        }
    }
    return 0;
}

