#include<stdio.h>
int main()
{
    int num[5],tc,i,j,k,big,small;

    while(scanf("%d",&tc)==1)
    {
        for(i=1;i<=tc;i++)
        {
            for(j=0;j<5;j++)
                scanf("%d",&num[j]);

                small=num[0];
                for(k=1;k<5;k++)
                {
                    if(small>num[k])
                        small=num[k];
                }

                big=num[0];
                for(k=1;k<5;k++)
                {
                    if(big<num[k])
                        big=num[k];
                }

            printf("%d %d\n",big,small);
        }
        break;
    }
    return 0;
}
