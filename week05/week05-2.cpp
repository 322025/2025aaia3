///week05-2.cpp
///���xstringstream
#include <iostream> ///cin cout getlineŪ�g���
#include <sstream> ///stringstream�ݭn�L
#include <string>///�ڭ̪��r��string
using namespace std;
int main()
{
    cout<<"�п�J�@�q�^��,�̭��i�H���Ů�: ";
    string s;///�r��
    getline(cin,s);///�@��Ū�J�@���,��Js
    cout <<"Ū��Fs�r��:"<<s<<endl;
    stringstream ss(s);///�N�r��a�ܦ�ss
    string word;///�r��word
    while(ss >> word){
        cout<< "���@�Ӧr:"<< word<<endl;
    }
}
