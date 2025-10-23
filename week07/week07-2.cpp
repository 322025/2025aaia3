///week07-2.cpp像畫星星一樣
///畫出超大的正方形,數字包起來
///TAICA交大基礎程式設計(c++)期中考題 第6題
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;///Part 1:Input
    cin>>n;

    for(int i=1;i<n*2;i++){///Part2 :output
        for(int j=1;j<n*2;j++){
            ///印出來後,發現正中心的1很有意思
            int d=max(abs(i-n),abs(j-n));
            cout<<d+1;///cout<<n;
        }
        cout<<endl;///cout<<"現在1是:"<<i<<endl:///樓城的概念
    }
}///2會有3城樓,3會有5城樓,4會有7城樓,5會有9城樓,
