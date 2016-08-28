# include <cstdio>
# include <iostream>
using namespace std;
int main(void)
{
    int cnt = 0;
    for ( int i = 20;;i++ ) {
        cnt = 0;
        for ( int j = 2;j <= 20;j++ ) {
            if ( i%j==0 ) cnt++;
        }
        if ( cnt == 19 ) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
