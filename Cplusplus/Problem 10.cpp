# include <cstdio>
# include <iostream>
using namespace std;
int ok( int x )
{
    for ( int i = 2;i*i <= x;i++ ) {
        if ( x%i==0 ) {
            return 0;
        }
    }
    return 1;
}
int main(void)
{
    long long sum = 0;
    for ( int i = 2;i <= 2000000;i++ ) {
        if ( ok(i) ) {
            sum+=i;
        }
    }
    printf("%lld\n",sum);
    return 0;
}
