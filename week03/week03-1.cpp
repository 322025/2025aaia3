///week03-1.cpp�ǲ�c++���}�Cvector<int> a;
///File-Save As�s�ɮɭn���ɦW�g��
#include <iostream>///c++��cin cout
#include <vector>///c++���}�Cvector
using namespace std;

int main()
{
    vector<int> a(2);///���Ӱ}�C�̭���2��(�}�C���j�p��2)

    for(int i=0;i<a.size();i++) cout<<a[i]<<' ';///�L�X�}�C
    cout <<endl;///����

    a.push_back(99);///��99����}�C����᭱.push_back()
    a.push_back(77);///��99����}�C����᭱

    for(int i=0;i<a.size();i++) cout<<a[i]<<' ';///�L�X�}�C
    cout <<endl;///����
}
