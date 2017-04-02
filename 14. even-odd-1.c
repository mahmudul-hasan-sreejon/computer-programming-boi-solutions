#include<stdio.h>
int main()
{
    int tc, i, n;
    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d", &n);

        if( n%2==0 )
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
