#include<stdio.h>
int main()
{
    int tc, i, s, j, k, l;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d", &s);

        for(j=1 ; j<=s ; j++)
        {
            for(k=j ; k<s ; k++)
                printf(" ");
            for(l=1 ; l<j*2 ; l++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}

