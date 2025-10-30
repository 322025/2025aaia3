//week08-1.cpp LeetCode學習計畫: 最有錢的人、將矩陣設一堆0
//1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0; i<accounts.size();i++){//左手
            int now=0;//迴圈前面 now=0
            for(int j=0;j<accounts[0].size();j++){//右手
                now += accounts[i][j];//把錢加起來
            }//迴圈前面更新 now陣列 左手右手
            //迴圈後面now拿來用
            ans= max(ans,now);//最有錢的人更新答案
        }
        return ans;
    }
};
