# include <cstdio>
# include <iostream>
using namespace std;
int main(void)
{
    int ans = 2;
    int a1 = 1, a2 = 2;
    while ( 1 ) {
        int value = a1+a2;
        if ( value > 4000000 ) break;
        if ( value%2==0 ) ans+=value;
        a1 = a2;
        a2 = value;
    }
    cout<<ans<<endl;
    return 0;
}
