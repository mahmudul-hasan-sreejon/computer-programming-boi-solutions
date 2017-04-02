#include <stdio.h>

int main()
{
    int tc, ncase;

    scanf("%d", &tc);
    ncase = 0;
    while( tc-- )
    {
        int n1, n2, n3;
        scanf("%d %d %d", &n1, &n2, &n3);

        int d1 = n2-n1, d2 = n3-n2;
        float r1 = (float) n2/n1, r2 = (float) n3/n2;

        printf("Case %d: ", ++ncase);
        if( (d1==d2) && (r1==r2) ) printf("Both\n");
        else if( d1==d2 ) printf("Arithmetic Progression\n");
        else if( r1==r2 ) printf("Geometric Progression\n");
        else printf("None\n");
    }
    return 0;
}
