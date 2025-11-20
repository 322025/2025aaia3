//week11-2b.cpp
//SOIT107_ADVANCE_009_C_C++
#include<iostream>
using namespace std;
int max_digit(int n)
{
	int max=0;
	while(n>0){
		int now=n%10;
		if(now>max) max=now;
		n/=10;
		}
		return max;
		}

int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* よC++  main ㄧ计 单基 よ C  main ㄧ计
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
