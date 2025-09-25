///week03-2a.cpp二合一要寫兩次
///Leetcode學習計畫第8題1822. Sign of the Product of an Array
///把陣列成起來,看市政束腹束還是0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//因為0乘任何數字都會變0只有乘1才會是甚麼
        for(int i=0;i<nums.size();i++){//看有幾個樹迴圈跑幾次
            ans*=nums[i];//每次把nums[i]乘進ans裡
        }//數字越乘越大，1000個數字，成到一半就爆炸了所以程式錯了
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
