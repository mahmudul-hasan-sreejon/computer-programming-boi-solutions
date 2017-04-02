#include <cstdio>
#include <iostream>
#include <map>
#include <sstream>

using namespace std;

long long fact[25];
string s, word;
map < string, int > m;
map < string, int > :: iterator mi;

int main( int argc, char ** argv ) {
//    freopen( "in.txt", "r", stdin );
//    freopen( "out.txt", "w", stdout );

    fact[0] = 1, fact[1] = 1;
    for( long long i = 2 ; i <= 20 ; ++i ) fact[i] = fact[i-1] * i;

    int T;
    cin >> T;
    cin.ignore();
    for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        getline( cin, s );
        istringstream temp( s );
        int n = 0;
        while( temp >> word ) {
            n++;
            if( m[word] >= 1 ) m[word] += 1;
            else m[word] = 1;
        }

        if( m.size() == 1 ) cout << "1/1\n";
        else {
            long long ans = fact[n];
            for( mi = m.begin() ; mi != m.end() ; ++mi ) {
                if( mi->second >= 2 ) {
                    ans = ans / fact[mi->second];
                }
            }

            cout << "1/" << ans << "\n";
        }

        s.clear();
        m.clear();
    }
    return 0;
}
