//week11-4.cpp 學習計畫Math倒數第三題
// LeetCode 67. Add Binary 二進為加法
//用字串來表達很長的二進位數字
class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1;//最右邊的個位數
        vector<int>ans;//伸縮自如的陣列,裡面放答案
        int carry=0;//進位的變數(直式加法中,上面小小的進位)
        while(i>=0 || j>=0){//想要a[i] v.s. b[j]來進行加法
        int now=carry;//現在這個位數,要做加法(等一下要再改)
        if(i>=0){
            now+=a[i]-'0';//字母a[i]減掉'0'變數值
            i--;//之前教過倒過來的迴圈for(int i=N-1;i>=0;i--)
        }
        if(j>=0){
            now+=b[j]-'0';
            j--;
        }
    ans.push_back(now%2);//加完後要加答案喔
    carry=now/2;//看有沒有進位(carry)
        }
        if(carry>0)ans.push_back(carry);//結束時還有進位
        //迴圈外面ans可以拿來用囉
        string strAns;//最後的return字串
        for(int i=ans.size()-1;i>=0;i--){
                strAns=strAns+(char)(ans[i]+'0');
        }
        return strAns;
        }
};
