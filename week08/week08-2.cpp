//week08-2.cpp LeetCode學習計畫:將矩陣設一堆0
//73. Set Matrix Zeroes
//要小心,不能一邊請,一邊設成0,藥用階段先請完再設成0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //地1階段 先讀完 記下全部的0對應全部的i和j
        int M =matrix.size(),N=matrix[0].size();//左手M 右手N
        vector<int> markI(M,0),markJ(N,0);
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){//藥劑下對應的i,j
                    markI[i]=1;//標記一下i是橫條,等一夏都要輕微0
                    markJ[j]=1;//標記一下j是橫條,等一夏都要輕微0
                }
            }
        }
        // 第2階梯,再造著markI和markJ做標記
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j]=0;
            }//如有標記再把它對應成0
        }
    }
};
