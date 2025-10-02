//week04-4b.cpp Part1:input Part2:output
//UVA100 The 3n+1
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while( cin>>a>>b){
		int ans=0;
		int now=1;
		while(n!=1){
			if(n%2==1) n=3*n+1;
			else n=n/2;
			now++;
			}

		if(now>ans) ans=now;
		printf("%d%d%d\n",a,b,ans);
	}
}
