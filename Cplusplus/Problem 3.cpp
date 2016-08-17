# include <cstdio>
# include <iostream>
using namespace std;
int main(void)
{
    long long res = 600851475143;
    long long maxprime = 0;
    int i = 2;
    while ( res!=1 ) {
        if ( res%i==0 ) {
            res/=i;
            maxprime = i;
        }
        else {
            i+=1;
        }
    }
    cout<<maxprime<<endl;

    return 0;
}
