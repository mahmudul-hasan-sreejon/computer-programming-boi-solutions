#include<stdio.h>
#define MAX 1000
int main()
{
    int tc, i, n[MAX], s=3, j, k, temp;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        for(j=0 ; j<s ; j++)
            scanf("%d", &n[j]);

        for(k=0 ; k<s-1 ; k++)
        {
            for(j=0 ; j<s-k-1 ; j++)
            {
                if( n[j]>n[j+1] )
                {
                    temp = n[j];
                    n[j] = n[j+1];
                    n[j+1] = temp;
                }
            }
        }

        printf("Case %d: ", i);
        for(k=0; k<s ; k++)
        {
            printf("%d", n[k]);
            if( k<s-1 )
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
