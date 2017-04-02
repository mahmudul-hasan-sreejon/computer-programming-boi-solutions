#include <stdio.h>

int main() {
//    freopen( "in.txt", "r", stdin );
//    freopen( "out.txt", "w", stdout );

    int T, nCase;
    scanf( "%d", &T );
    for( nCase = 1 ; nCase <= T ; ++nCase ) {
        int X1,Y1,A1,B1;
        int X2,Y2,A2,B2;

        scanf( "%d %d %d %d", &X1, &Y1, &A1, &B1 );
        scanf( "%d %d %d %d", &X2, &Y2, &A2, &B2 );

        int W1 = abs( X1 - A1 ), H1 = abs( Y1 - B1 );
        int W2 = abs( X2 - A2 ), H2 = abs( Y2 - B2 );

        if( (X1 + W1 <= X2) || (X2 + W2 <= X1) || (Y1 + H1 <= Y2) || (Y2 + H2 <= Y1) ) printf( "Case %d: No\n", nCase );
        else printf( "Case %d: Yes\n", nCase );
    }
    return 0;
}
