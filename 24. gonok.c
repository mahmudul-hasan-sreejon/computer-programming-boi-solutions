#include<stdio.h>
int main()
{
    int tc, i, hh1, mm1, ss1, hh2, mm2, ss2, T;
    int start, finish, sum, temp;

    scanf("%d", &tc);

    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d %d %d", &hh1, &mm1, &ss1);
        scanf("%d %d %d", &hh2, &mm2, &ss2);
        scanf("%d", &T);

        start = (hh1*60*60) + (mm1*60) + ss1;

        if( hh2<hh1 )
            finish = ((hh2+24)*60*60) + (mm2*60) + ss2;
        else
            finish = (hh2*60*60) + (mm2*60) + ss2;

        sum = (finish-start)*T;

        printf("%d\n", sum);
    }
    return 0;
}
