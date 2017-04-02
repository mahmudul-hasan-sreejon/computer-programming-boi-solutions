#include<stdio.h>
#include<string.h>
int main()
{
    int tc, i, l;
    char n[101], dump;

    scanf("%d%c", &tc, &dump);
    for(i=1 ; i<=tc ; i++)
    {
        gets(n);

        l=strlen(n);

        l=n[l-1]-48;

        if( l%2==0 )
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
