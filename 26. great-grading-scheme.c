#include<stdio.h>
int main()
{
    int tc,i,num;

    while(scanf("%d",&tc)==1)
    {
        for(i=1;i<=tc;i++)
        {
            scanf("%d",&num);
            if(num>=0 && num<=44)
                printf("Case %d: F\n",i);
            else if(num>=45 && num<=49)
                printf("Case %d: D\n",i);
            else if(num>=50 && num<=54)
                printf("Case %d: C\n",i);
            else if(num>=55 && num<=59)
                printf("Case %d: B-\n",i);
            else if(num>=60 && num<=64)
                printf("Case %d: B\n",i);
            else if(num>=65 && num<=69)
                printf("Case %d: B+\n",i);
            else if(num>=70 && num<=74)
                printf("Case %d: A-\n",i);
            else if(num>=75 && num<=79)
                printf("Case %d: A\n",i);
            else if(num>=80 && num<=100)
                printf("Case %d: A+\n",i);
        }
        break;
    }
    return 0;
}
