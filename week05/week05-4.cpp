///week05-4.cpp
//// LeetCode �ǲ߭p�e 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {//�C�@�Ӧr��
        for(int i=0;i<s.length();i++){
            s[i]= tolower(s[i]);//�ܦ��p�g
        }//�C�Ӧr�����ܦ��p�g
        //�άO��#include <cctype>��ӬO�P�@���ɮ�
        return s;//���װe�X�h
    }
};
