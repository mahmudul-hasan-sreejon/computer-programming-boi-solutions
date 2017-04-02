#include<stdio.h>
int main()
{
    int tc, i;
    float a_t, b_t, ball_l, ball_d, over_d, over_l, cr, rr;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%f %f %f", &a_t, &b_t, &ball_l);

        ball_d = (50*6)-ball_l;

        over_d = ball_d/6;
        over_l = 50-over_d;

        cr = b_t/over_d;
        rr = ((a_t+1)-b_t)/over_l;

        printf("%.2f %.2f\n", cr, rr);
    }
    return 0;
}
