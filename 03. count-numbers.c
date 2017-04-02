#include<stdio.h>
#include<ctype.h>
#define MAX 1000
int main()
{
    int t, j, i, count, flag;
    char text[MAX], temp;

    scanf("%d", &t);
    for(j=0 ; j<=t ; j++)
    {
        gets(text);
        if ( j>=1 )
        {
            count=0;
            flag=1;

            for(i=0 ; text[i] ; i++)
            {
                if( isdigit(text[i]) )
                {
                    if( flag )
                        count++;
                    flag=0;
                }
                else
                    flag=1;
            }
            printf("%d\n", count);
        }
    }
    return 0;
}
