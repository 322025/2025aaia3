//week10-1b.cpp 第二次 第一次用for迴圈
//1523. Count Odd Numbers in an Interval Range
//從low到high裡面有基數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low) / 2;//用數學 基數站一半
            if(high%2==1 || low%2==1) ans++;//頭尾有機數 愛++
        return ans;
    }
};
