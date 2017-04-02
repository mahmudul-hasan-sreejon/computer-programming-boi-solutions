#include<stdio.h>
#define MAX 1000
int main()
{
    long long tc, i, n, l, j, t[MAX], k, x;

    scanf("%lld", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%lld %lld", &n, &l);

        k=0;
        for(j=n ; j<=l ; j++)
        {
            if( j%n==0 )
            {
                t[k++]=j;
            }
        }

        printf("Case %lld: ", i);
        for(x=0; x<k ; x++)
        {
            printf("%lld", t[x]);
            if( x<k-1 )
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
