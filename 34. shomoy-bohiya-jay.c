#include <stdio.h>

char name[8][11] = {"second", "minute", "hour", "day", "month", "year"};
long time_counter[8];

int main()
{
    long tc, ncase;

    scanf("%ld", &tc);
    ncase = 0;
    while( tc-- )
    {
        long sec;
        scanf("%ld", &sec);

        long i;
        for(i=0 ; i<10 ; i++) time_counter[i] = 0;

        time_counter[5] = sec/(12*30*24*60*60);
        if( time_counter[5]>0 ) sec -= time_counter[5]*12*30*24*60*60;

        time_counter[4] = sec/(30*24*60*60);
        if( time_counter[4]>0 ) sec -= time_counter[4]*30*24*60*60;

        time_counter[3] = sec/(24*60*60);
        if( time_counter[3]>0 ) sec -= time_counter[3]*24*60*60;

        time_counter[2] = sec/(60*60);
        if( time_counter[2]>0 ) sec -= time_counter[2]*60*60;

        time_counter[1] = sec/60;
        if( time_counter[1]>0 ) sec -= time_counter[1]*60;

        time_counter[0] = sec;

        printf("Case %ld:", ++ncase);
        for(i=5 ; i>=0 ; i--)
            if( time_counter[i]>0 ) printf(" %ld %s%s", time_counter[i], name[i], time_counter[i]==1 ? "" : "s");
        printf("\n");
    }
    return 0;
}
