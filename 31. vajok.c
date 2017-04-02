#include <stdio.h>
int main()
{
    long long tc, i, n, j;

    scanf("%lld", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%lld", &n);

        printf("Case %lld: ", i);
        for(j=1 ; j<=n ; j++)
        {
            if( n%j==0 && j!=n )
                printf("%lld ", j);
            if( j==n )
                printf("%lld\n", n);
        }
    }
    return 0;
}
