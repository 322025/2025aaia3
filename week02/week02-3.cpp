///week02-3.cpp使用c++2011年新版的字串stoi()功能
///SOTT106_ADVANCE_001 Using C++
#include <iostream>///cin cout 讀錄資料，印出資料
#include <string>?///string字串的功能
using namespace std;///使用命名空間標準的std
int main()
{{
	string a;///宣告字串
	string ans;///宣告字串 ans放答案用的
	cin >> a;///讀入字串
	int N =a.length();///字串a的長度
	for(int i=N-1; i>=0;i--){///到過來的迴圈
		ans+=a[i];///在迴圈哩，把a[i]塞到ans的後面
	}
	cout<<a<<'+'<<stoi(ans)<<'='
	    <<stoi(a)+stoi(ans)<<endl;
}}
///stoi()is"string to int" 把字串變成整數
