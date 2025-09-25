///week03-3a.cpp二合一的第一種方法把不是的找出來
///Leetcode 學習計畫283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i] !=0)ans.push_back(nums[i]);
        }///上面把不是0的樹暫時放在ans哩，等遺下再塞回去
        ///再用for迴圈放回去
        for(int i=0;i<nums.size();i++){
            if(i<ans.size()) nums[i]=ans[i];//塞回去
            else nums[i]=0;//其他的放0
        }
    }
};
