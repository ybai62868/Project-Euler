# include <cstdio>
# include <iostream>
using namespace std;
int ok ( int x )
{
    int temp = x;
    int cnt = 0;
    int res = x%10;
    x/=10;
    while ( x!=0 ) {
        res = (res*10)+x%10;
        x/=10;
    }
    return temp==res;
}
int main(void)
{
    int flag = 0;
    int ans = 0;
    for ( int i = 999;i > 99;i--) {
        for( int j = 999;j > 99;j-- ) {
            if ( ok(i*j) ) {
                ans = max(ans,i*j);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
