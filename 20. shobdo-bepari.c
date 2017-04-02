#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 10000
int main()
{
    int tc, i, l, count, flag, j;
    char text[MAX], dump;

    scanf("%d%c", &tc, &dump);
    for(i=1 ; i<=tc ; i++)
    {
        gets(text);
        l=strlen(text);

        count=0;
        flag=1;
        for(j=0 ; j<l ; j++)
        {
            if( isalpha(text[j]) )
            {
                if( flag==1 )
                    count++;
                flag=0;
            }
            else
	            flag=1;
        }

        printf("%d\n", count*420);
    }
    return 0;
}
