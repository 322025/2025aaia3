///week05-2.cpp
///熟悉stringstream
#include <iostream> ///cin cout getline讀寫資料
#include <sstream> ///stringstream需要他
#include <string>///我們的字串string
using namespace std;
int main()
{
    cout<<"請輸入一段英文,裡面可以有空格: ";
    string s;///字串
    getline(cin,s);///一次讀入一整行,放入s
    cout <<"讀到了s字串:"<<s<<endl;
    stringstream ss(s);///將字串a變成ss
    string word;///字串word
    while(ss >> word){
        cout<< "有一個字:"<< word<<endl;
    }
}
