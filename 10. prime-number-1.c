#include<stdio.h>
int is_prime(int a)
{
    int i;
    if( a==1 || a==0)
        return 0;/*NO*/
    for(i=2 ; i<a ; i++)
    {
        if( a%i==0 )
            return 0;/*NO*/
    }
        return 1;/*YES*/
}
int main()
{
    int tc, i, j, num, p, k, count;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        count=0;
        for(j=0 ; j<10 ; j++)
        {
            scanf("%d", &num);

            p = is_prime( num );
            if( p==1 )
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
