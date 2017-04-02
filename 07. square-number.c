#include<stdio.h>
#include<math.h>
int main()
{
    int tc,i,num,temp;

    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&num);

        temp=sqrt(num);

        if(temp*temp==num)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
