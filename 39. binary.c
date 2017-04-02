#include <stdio.h>

int binary[12];

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int N;
        scanf("%d", &N);

        if( N==1 ) printf("0\n1\n");
        else
        {
            int num;
            for(num=2 ; ; num++)
            {
                int temp = num, pos = 0;
                while( temp!=0 )
                {
                    binary[pos] = temp%2;
                    temp /= 2;
                    pos++;
                }

                if( N<pos ) break;

                if( N==pos )
                {
                    int i;
                    for(i=pos-1 ; i>=0 ; i--)
                        printf("%d", binary[i]);
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
