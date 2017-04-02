#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
    int tc, i, num[MAX], l, j, x, y;
    char t[MAX], dump;

    scanf("%d%c", &tc, &dump);
    for(i=1 ; i<=tc ; i++)
    {
        gets(t);

        l = strlen(t);

        for(j=0 ; j<l ; j++)
        {
            t[j] = t[j]-48;
            num[j] = t[j];
        }

        for(j=0 ; j<l ; j++)
        {
            if( num[j]%2==0 )
                num[j] = num[j]+1;
            else
                num[j] = num[j]-1;
        }

        y=l;
        x=0;
        for(j=0 ; j<l ; j++)
        {
            x = x*10 + num[j];
        }
        printf("%d\n", x);
    }
    return 0;
}
