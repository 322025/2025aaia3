//week11-3.cpp 學習計畫: 第3題
//leetcode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0,d10=0,d20=0;//三種鈔票
        for(int bill:bills){//c++進階 for迴圈
            if(bill==5)d5++;//順利拿到54元鈔
            if(bill==10){
                if(d5<1)return false;
                d10++;//拿到10
                d5--;//找出5
            }
            if(bill==20){//客人給你20元鈔票 要找15元
                if(d10>0 && d5>0){//可以
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false;//找不開 失敗
            }
        }
       return true ;//成功
    }
};
