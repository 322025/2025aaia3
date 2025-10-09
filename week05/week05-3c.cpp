///week05-3c.cpp Part 1: Input Part2 :Output
///Part3:stringstream Part4:反過來
///Part5:火車頭+車廂+車廂+車廂
///CPE 第二題 UVA 483 倒過來
#include <iostream>
#include <sstream>///Part3:stringstream
#include <algorithm>///Part4:reverse
using namespace std;
int main()
{
    string line;///一行字的字串 Part 1: Input
    while (getline(cin,line)){///讀近來
        stringstream ss(line);///Part3:stringstream斷字
        string word;///自放這裡
        ss >> word;///火車頭這裡
        reverse(word.begin(),word.end());
        cout<< word;///火車頭沒有空格
        while(ss >> word) {///Part 3用ss斷字
            reverse(word.begin(),word.end());///Part4
             cout<<" "<<word;///+車廂
            ///cout<<"讀到了"<<word<<endl;///Part3
        }
    cout<< endl;///cout<< line<<endl;///Part2 :Output
    }
}
