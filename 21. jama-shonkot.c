#include<stdio.h>
int main ()
{
    int tc, i, day;
    scanf("%d", &tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d", &day);
        if( day%2==0 )
            printf("red\n");
        else
            printf("blue\n");
    }
    return 0;
}
