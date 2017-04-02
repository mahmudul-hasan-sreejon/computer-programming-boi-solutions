#include<stdio.h>
int main()
{
    int tc,i,j,num[5],sum=0,result;

    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d",&num[j]);

        for(j=0;j<5;j++)
            sum=sum+num[j];

        result=sum/5;

        printf("%d\n",result);
        sum=0;
    }
    return 0;
}
