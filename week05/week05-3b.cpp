///week05-3b.cpp Part 1: Input Part2 :Output
///Part3:stringstream Part4:�ϹL��
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
        while(ss >> word) {///Part 3��ss�_�r
            reverse(word.begin(),word.end());///Part4
            cout<<"Ū��F"<<word<<endl;///Part3
        }
    cout<< line<<endl;///Part2 :Output
    }
}
