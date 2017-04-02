#include<stdio.h>
int main()
{
    int num, t, j, p=0, n=0;

    while( scanf("%d", &t)==1 )
    {
        for(j=0 ; j<t ; j++)
        {
            scanf("%d", &num);
            if( num>0 )
                p++;
            else
                n++;
        }
        printf("%d %d", p, n);
        break;
    }
    return 0;
}
