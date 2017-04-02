#include<stdio.h>
int main()
{
    int tc,i,num,rev=0,count=0;

    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&num);

        if(num==0)
            count=1;
        else
        {
            while(num>0)
            {
                rev = (rev*10) + (num%10);
                num = num/10;
                count++;
            }
        }

        printf("%d\n",count);
        count=0;
    }
    return 0;
}
