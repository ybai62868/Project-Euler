# include <cstdio>
# include <iostream>
using namespace std;
int cnt = 0;
int ok ( int x )
{
    for ( int i = 2;i*i <=x;i++ ) {
        if ( x%i==0 ) return 0;
    }
    cnt++;
    return 1;
}
int main(void)
{
    for ( int i = 2;;i++ ) {
        if ( ok(i)&&cnt==10001 ) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
