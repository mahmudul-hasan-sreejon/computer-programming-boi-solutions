#include <stdio.h>
#include <string.h>

char num_1[1005], num_2[1005];

int counter[12];

int main()
{
    int tc;
    char dump;

    scanf("%d%c", &tc, &dump);
    while( tc-- )
    {
        scanf("%s", num_1);
        scanf("%s", num_2);

        int i;
        for(i=0 ; i<12 ; i++) counter[i] = 0;

        int j;
        for(i=0 ; i<strlen(num_1) ; i++)
        {
            for(j=0 ; j<strlen(num_2) ; j++)
            {
                if( num_1[i]==num_2[j] )
                {
                    counter[num_1[i]-'0']++;
                }
            }
        }

        int flag = 1;
        for(i=0 ; i<10 ; i++)
        {
            if( counter[i]>0 )
            {
                printf("%d", i);
                flag = 0;
            }
        }
        if( flag ) printf("N");
        printf("\n");
    }
    return 0;
}
