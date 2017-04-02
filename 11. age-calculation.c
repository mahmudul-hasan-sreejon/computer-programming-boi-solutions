#include <stdio.h>

int year[] = {0, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30, 30};

int is_leap(int y)
{
    if( y%4==0 && y%100!=0 || y%400==0 ) return 1;
    return 0;
}

int main()
{
    int tc, form_year, form_month, form_date;

    scanf("%d %d %d", &form_year, &form_month, &form_date);
    scanf("%d", &tc);
    while( tc-- )
    {
        int student_year, student_month, student_date;
        scanf("%d %d %d", &student_year, &student_month, &student_date);

        int days = 0;
        if( is_leap(student_year) && student_month==11 ) days += 31-student_date;
        else
        {
            if( student_month<=5 ) days += 31-student_date;
            else days += 30-student_date;
        }

        int i;
        for(i=student_month+1 ; i<=12 ; i++)
        {
            if( i!=11 ) days += year[i];
            else
            {
                if( is_leap(student_year) ) days += year[11]+1;
                else days += year[11];
            }
        }

        int j;
        for(i=student_year+1 ; i<form_year ; i++)
        {
            for(j=1 ; j<=12 ; j++)
            {
                if( j!=11 ) days += year[j];
                else
                {
                    if( is_leap(i) ) days += year[11]+1;
                    else days += year[11];
                }
            }
        }

        for(i=1 ; i<form_month ; i++)
        {
            if( i!=11 ) days += year[i];
            else
            {
                if( is_leap(form_year) ) days += year[11]+1;
                else days += year[11];
            }
        }

        days += form_date;

        printf("%d\n", days);
    }
    return 0;
}
