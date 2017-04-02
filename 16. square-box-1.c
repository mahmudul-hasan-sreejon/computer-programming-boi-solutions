#include<stdio.h>
int main()
{
    long long int tc, i, s, j, k;

    scanf("%lld", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%lld", &s);

        for(j=0 ; j<s ; j++)
        {
            for(k=0 ; k<s ; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}

