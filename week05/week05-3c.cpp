///week05-3c.cpp Part 1: Input Part2 :Output
///Part3:stringstream Part4:�ϹL��
///Part5:�����Y+���[+���[+���[
///CPE �ĤG�D UVA 483 �˹L��
#include <iostream>
#include <sstream>///Part3:stringstream
#include <algorithm>///Part4:reverse
using namespace std;
int main()
{
    string line;///�@��r���r�� Part 1: Input
    while (getline(cin,line)){///Ū���
        stringstream ss(line);///Part3:stringstream�_�r
        string word;///�۩�o��
        ss >> word;///�����Y�o��
        reverse(word.begin(),word.end());
        cout<< word;///�����Y�S���Ů�
        while(ss >> word) {///Part 3��ss�_�r
            reverse(word.begin(),word.end());///Part4
             cout<<" "<<word;///+���[
            ///cout<<"Ū��F"<<word<<endl;///Part3
        }
    cout<< endl;///cout<< line<<endl;///Part2 :Output
    }
}
