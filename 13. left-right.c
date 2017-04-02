#include<stdio.h>
#define MAX 1000
int main()
{
    int tc, i, l, j;
    char a[MAX], dump, t[MAX];

    scanf("%d%c", &tc, &dump);
    for(i=1 ; i<=tc ; i++)
    {
        gets(a);
        l=strlen(a);

        for(j=0 ; j<l ; j++)
        {
            if( a[j]=='R' )
            {
                a[j]=a[j+1];
                t[j]=a[j];
            }
            else if( a[j]=='L' )
            {
                a[j]=a[j-1];
                t[j]=a[j];
            }
            else
                t[j]=a[j];
        }

        for(j=0 ; j<l ; j++)
            printf("%c", t[j]);
        printf("\n");
    }
    return 0;
}
