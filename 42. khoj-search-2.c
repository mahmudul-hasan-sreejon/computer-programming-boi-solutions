#include <stdio.h>
#include <string.h>

char s[1005], find[1005];

int main()
{
    int tc;
    char dump;

    scanf("%d%c", &tc, &dump);
    while( tc-- )
    {
        scanf("%s", s);
        scanf("%s", find);

        int i, j, flag = 0, index, counter = 0;
        for(i=0 ; i<strlen(s) ; i++)
        {
            index = 0;
            if( s[i]==find[index] )
            {
                for(j=i ; j<i+strlen(find) ; j++)
                {
                    if( s[j]!=find[index] || !s[j] )
                    {
                        flag = 0;
                        break;
                    }
                    if( s[j]==find[index] )
                    {
                        flag = 1;
                        index++;
                    }
                }
                if( flag ) counter++;
            }
        }

        printf("%d\n", counter);
    }
    return 0;
}
