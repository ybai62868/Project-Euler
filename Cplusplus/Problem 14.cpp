# include <cstdio>
# include <iostream>
using namespace std;
int cal ( int x )
{
    int temp = x;
    int cnt = 1;
    while ( temp!=1 ) {
            cnt++;
        if ( temp&1==1 ) {
            temp = 3*temp+1;
        }
        else {
            temp /= 2;
        }
    }
    return cnt;
}
int main(void)
{
    int res = 0;
    for ( int i = 1;i <= 1000000;i++ ) {
        res = max(res,cal(i));
    }
    cout<<res<<endl;
    return 0;
}
