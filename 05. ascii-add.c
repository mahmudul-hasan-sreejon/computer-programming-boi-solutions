#include<stdio.h>
int main()
{
    int t,i,num,j,sum=0,temp;
    char text[4];

    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
        {
            scanf("%s",text);
            for(j=0;j<4;j++)
            {
                temp=text[j];
                sum=sum+temp;
            }
            printf("%d\n",sum);
            sum=0;
        }
        break;
    }
    return 0;
}
