///week05-4.cpp
//// LeetCode 學習計畫 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {//每一個字幕
        for(int i=0;i<s.length();i++){
            s[i]= tolower(s[i]);//變成小寫
        }//每個字母都變成小寫
        //或是用#include <cctype>兩個是同一個檔案
        return s;//答案送出去
    }
};
