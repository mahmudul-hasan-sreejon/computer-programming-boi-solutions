#include <stdio.h>

int main() {
//    freopen( "in.txt", "r", stdin );
//    freopen( "out.txt", "w", stdout );

    int T, nCase;
    scanf( "%d", &T );
    for( nCase = 1 ; nCase <= T ; ++nCase ) {
        int a, b, x, y;
        scanf( "%d %d %d %d", &a, &b, &x, &y );

        int ans = 0;
        if( a == x || b == y ) {
            if( a == x ) ans = abs( b - y );
            else if( b == y ) ans = abs( a - x );
        }
        else if( abs( a - x ) == abs( b - y ) ) ans = abs( a - x );
        else {
            if( abs( a - x ) < abs( b - y ) ) ans = abs( a - x );
            else ans = abs( b - y );

            if( b < y ) {
                if( a < x ) {
                    a += ans;
                    b += ans;
                }
                else {
                    a -= ans;
                    b += ans;
                }
            }
            else {
               if( a < x ) {
                    a += ans;
                    b -= ans;
                }
                else {
                    a -= ans;
                    b -= ans;
                }
            }

            if( a == x ) ans += abs( b - y );
            else if( b == y ) ans += abs( a - x );
        }

        printf( "Case %d: %d\n", nCase, ans );
    }
    return 0;
}
