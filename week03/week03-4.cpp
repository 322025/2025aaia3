week03-4.cpp
///Leetcode 120. Triangle
class Solution {//使用動態規劃
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ///traingle[i][j]第i層的第j個數
        int N =traingle.size();///總共有幾個
        ///從下往上,最下面的第N-1層，沒問題，就是本身的最小值，所以從N-2往上更新
        for(int i=N-2;i=0;i--){///到過來的迴圈，從N-2往上
            for(int j=0;j<i;j++){
                traingle[i][j]+=min(traingle[i+1][j],traingle[i+1][j+1]);
            }
        }
        return traingle[0][0];
    }
};
