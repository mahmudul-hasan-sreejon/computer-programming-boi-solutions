#include <stdio.h>
int main ()
{
    int tc, i, r, l, w;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d %d %d", &r, &l, &w);

        if( r<=w/2 && r<=l/2 )
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
