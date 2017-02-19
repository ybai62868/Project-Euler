# include <cstdio>
# include <iostream>
using namespace std;
int main(void)
{
	int res = 0;
	for ( int i = 0;i <= 200;i++ ) {
		for ( int j = 0;j <= 100;j++ ) {
			for ( int k = 0;k <=40;k++ ) {
				for ( int n = 0;n <= 20;n++ ) {
					for ( int m = 0;m <= 10;m++ ) {
						for ( int l = 0;l <= 4;l++ ) {
							for ( int o = 0;o <= 2;o++ ) {
								for ( int v = 0;v <= 1;v++ ) {
									if (i*1+j*2+k*5+n*10+m*20+l*50+o*100+v*200==200) {
										res++;
									}
								}
							}
						}
					}
				}
			}
		}
	}	
	cout<<res<<endl;

	return 0;

}
