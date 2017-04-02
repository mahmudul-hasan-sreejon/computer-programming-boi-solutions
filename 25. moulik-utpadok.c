#include <stdio.h>

int power[65540] = {0, 0};

int main()
{
    int N;

    while( scanf("%d", &N)==1 && N>=2 )
    {
        printf("%d = ", N);

        int i;
        for(i=2 ; i<65540 ; i++) power[i] = 0;

        int div = 2;
        while( N>=2 )
        {
            if( N%div==0 )
            {
                power[div]++;
                N /= div;
            }
            else div++;
        }

        int flag = 1;
        for(i=2 ; i<65540 ; i++)
        {
            if( power[i]>0 && !flag ) printf(" * %d^%d", i, power[i]);
            if( power[i]>0 && flag )
            {
                printf("%d^%d", i, power[i]);
                flag = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
