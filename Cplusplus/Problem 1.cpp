# include <cstdio>
# include <iostream>
using namespace std;
int main(void)
{
    long long res = 0;
    for ( int i = 1;i < 1000;i++ ) {
        if ( i%3==0||i%5==0 ) {
            res+=i;
        }
        else if ( i%15==0 ) {
            res-=i;
        }
    }
    cout<<res<<endl;
    return 0;
}
