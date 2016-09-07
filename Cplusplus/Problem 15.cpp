# include <cstdio>
# include <iostream>
# include <cstring>
# include <string>
# include <cmath>
using namespace std;
typedef long long LL;
LL a[21][21];
int main(void)
{
    for ( int i = 0;i < 21;i++ ) {
        a[0][i] = 1;
        a[i][0] = 1;
    }
    for ( int i = 1;i < 21;i++ ) {
        for ( int j = 1;j < 21;j++ ) {
            a[i][j] = a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[20][20]<<endl;

    return 0;
}
