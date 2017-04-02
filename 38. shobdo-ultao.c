#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    char dump, n[1000];

    scanf("%d%c", &tc, &dump);
    while( tc-- )
    {
        gets(n);
        int l = strlen(n);

        char temp[l+1];
        strcpy(temp, n);

        int i;
        for(i=l-1 ; i>=0 ; i--)
            n[i] = temp[l-1-i];

        int j, b = -1;

        for(i=0 ; i<l ; i++)
        {
            if( n[i]==' ' )
            {
                for( j=i-1 ; j>b ; j--)
                    printf("%c", n[j]);
                printf(" ");
                b = i;
            }
        }

        for(i=l-1 ; i>b ; i--)
            printf("%c", n[i]);
        printf("\n");
    }
    return 0;
}
