# include <cstdio>
# include <iostream>
using namespace std;
int main(void)
{
    for ( int i = 1;i <= 1000;i++ ) {
        for ( int j = i+1;j < 1000;j++ ) {
            for ( int k = j+1;k < 1000;k++ ) {
                if ( i*i+j*j==k*k && i+j+k==1000 ) {
                    cout<<i*j*k<<endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
