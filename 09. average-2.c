#include<stdio.h>
int main()
{
    int tc,i,j,sum,count,num;

    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d", &count);
        sum=0;
        for(j=0;j<count;j++)
        {
            scanf("%d", &num);
            sum=sum+num;
        }
        printf("%.2f\n",(float) sum/count);
    }
    return 0;
}
