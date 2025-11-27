//week12-2.cpp  學習計畫
// LeetCode 976. Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());//先有效的排序
        //先練習倒過來 把大到小列印出來
        //for (int i=nums.size()-1;i>=0;i--){
        //   cout<<nums[i]<<" ";//等一下刪掉
        //把大到小列印出來 正確 等一下刪掉
        for (int i=nums.size()-1;i>=2;i--){
                //取出nums[i] vs nums[i-1]+nums[i-2]
            if(nums[i]<nums[i-1]+nums[i-2]){
                return nums[i]+nums[i-1]+nums[i-2];
            }//找到最大的合法三角形 把三邊加起來
        }
        return 0;//找不到答案 return 0
    }
};
