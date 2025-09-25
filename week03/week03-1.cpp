///week03-1.cpp學習c++的陣列vector<int> a;
///File-Save As存檔時要把檔名寫齊
#include <iostream>///c++的cin cout
#include <vector>///c++的陣列vector
using namespace std;

int main()
{
    vector<int> a(2);///有個陣列裡面有2格(陣列的大小事2)

    for(int i=0;i<a.size();i++) cout<<a[i]<<' ';///印出陣列
    cout <<endl;///跳行

    a.push_back(99);///把99推到陣列的更後面.push_back()
    a.push_back(77);///把99推到陣列的更後面

    for(int i=0;i<a.size();i++) cout<<a[i]<<' ';///印出陣列
    cout <<endl;///跳行
}
