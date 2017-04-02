#include<stdio.h>
int main()
{
    int tc, i, a, b, c;

    while( scanf("%d", &tc)==1 )
    {
        for(i=1 ; i<=tc ; i++)
        {
            scanf("%d %d %d", &a, &b, &c);
            if( (a>=1 && a<=100) && (b>=1 && b<=100) && (c>=1 && c<=100) )
                printf("%d\n", a*b*c);
        }
        break;
    }
    return 0;
}
