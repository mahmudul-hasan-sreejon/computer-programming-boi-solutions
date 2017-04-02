#include <stdio.h>
#include <string.h>
#define MAX 1001
int main()
{
    int tc, i, l, j, flag;
    char n[MAX], dump;

    scanf("%d%c", &tc, &dump);
    for(i=1 ; i<=tc ; i++)
    {
        gets(n);

        l=strlen(n);

        flag=0;
        for(j=0 ; j<l ; j++)
        {
            if( flag==-1 )
                break;
            if( n[j]=='1' )
                flag += 1;
            else
                flag -= 1;
        }

        if( l==1 )
            printf("NORMAL\n");
        else if( flag==-1 )
            printf("MAGIC\n");
        else
            printf("NORMAL\n");
    }
    return 0;
}
