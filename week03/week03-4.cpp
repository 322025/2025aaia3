week03-4.cpp
///Leetcode 120. Triangle
class Solution {//�ϥΰʺA�W��
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ///traingle[i][j]��i�h����j�Ӽ�
        int N =traingle.size();///�`�@���X��
        ///�q�U���W,�̤U������N-1�h�A�S���D�A�N�O�������̤p�ȡA�ҥH�qN-2���W��s
        for(int i=N-2;i=0;i--){///��L�Ӫ��j��A�qN-2���W
            for(int j=0;j<i;j++){
                traingle[i][j]+=min(traingle[i+1][j],traingle[i+1][j+1]);
            }
        }
        return traingle[0][0];
    }
};
