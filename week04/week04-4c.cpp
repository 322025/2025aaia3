//week04-4c.cpp Part1:input Part2:output
//UVA100 The 3n+1
#include <iostream>
using namespace std;
int main()
{
	int a,b;//Part1:input
	while( cin>>a>>b){
		int ans=0;
		int a2=a,b2=b;//part6
		if(a2>b2) swap(a2,b2);//part6
		for(int i=a2;i<=b2;i++){//part5 //part6
			int now=1;//Part4
			int n=i;
			while(n!=1){//part3
				if(n%2==1) n=3*n+1;
				else n=n/2;
				now++;//Part4
			}
			if(now>ans) ans=now;//Part4
		}
		printf("%d %d %d\n", a, b, ans);
	}//Part2:output
}
