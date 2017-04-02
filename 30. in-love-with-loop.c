#include <stdio.h>

int main()
{
    int tc, ncase;

    scanf("%d", &tc);
    ncase = 0;
    while( tc-- )
    {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        int x, y, z;
        printf("Case %d:\n", ++ncase);
        for(x=0 ; x<=A ; x++)
            for(y=x ; y<=B ; y++)
                for(z=y ; z<=C ; z++)
                    if( x<y && y<z ) printf("%d %d %d\n", x, y, z);
    }
    return 0;
}
