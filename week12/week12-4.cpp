//week12-4.cpp  學習計畫
// LeetCode 1232. Check If It Is a Straight Line
//側一下所有的點是不是在同意條直線上
//斜率a:b=c:d 或 a/b =c/d 或 a*d== b*c
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 =coordinates[0][0],y0 = coordinates[0][1];
        int x1 =coordinates[1][0],y1 = coordinates[1][1];
        int dx = x1 - x0, dy= y1- y0;//dn是x的插植 dy是y的插植
        for(int i=2; i<coordinates.size();i++){
            int xx = coordinates[i][0], yy  = coordinates[i][1];
            //希望dx*dyy == dy*dxx但如果不相等直接失敗
            if(dx*(yy-y0) != dy*(xx-x0)) return false;
        }//前面有失敗就會提早結束 如果都沒失敗
        return true;//就成功了
    }
};
