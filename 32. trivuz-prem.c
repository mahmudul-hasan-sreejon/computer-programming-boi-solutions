#include<stdio.h>
int main()
{
    long long tc, i, a, b;

    scanf("%lld", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%lld %lld", &a, &b);

        printf("Case %lld: %lld\n", i, a*b);
    }
    return 0;
}
