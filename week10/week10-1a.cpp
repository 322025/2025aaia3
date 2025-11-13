//week10-1a.cpp 第二次 第一次用for迴圈
//1523. Count Odd Numbers in an Interval Range
//從low到high裡面有基數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            if(i%2==1) ans++;//基數
        }
        return ans;
    }
};
