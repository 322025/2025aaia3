//week09-3.cpp   LeetCode 學習計畫:第3題螺旋矩陣
//LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M =matrix.size(),N=matrix[0].size();
        int up=0,down=M-1,left=0,right=N-1;
        //先把上下左右的邊界，都宣告一個變數初始直
        vector<int> ans;
        while(up<=down && left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[up][i]);
            }
            up++;//AI助手說,要寫up++上邊界內縮
            for(int i=up;i<=down;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;//AI助手說,是右邊內縮
            if(! (up<=down && left<=right))break;//邊界超過範圍，交叉，沒辦法繼續進行
            for(int i=right;i>=left;i--){//倒過來迴圈往左
                ans.push_back(matrix[down][i]);
        }
        down--;

            for(int i=down;i>=up;i--){//倒過來迴圈往上
                ans.push_back(matrix[i][left]);
            }
        left++;
        }
        return ans;
    }
};
