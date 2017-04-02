#include <stdio.h>

int main()
{
    long long tc;

    scanf("%lld", &tc);
    while( tc-- )
    {
        long long num;
        scanf("%lld", &num);

        long long i, flag = 1;
        for(i=2 ; i*i<num ; i++)
        {
            if( num%i==0 )
            {
                flag = 0;
                break;
            }
        }

        if( flag )
            printf("%lld is a prime\n", num);
        else
            printf("%lld is not a prime\n", num);
    }
    return 0;
}
