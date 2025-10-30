//week08-2.cpp LeetCode�ǲ߭p�e:�N�x�}�]�@��0
//73. Set Matrix Zeroes
//�n�p��,����@���,�@��]��0,�ĥζ��q���Ч��A�]��0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //�a1���q ��Ū�� �O�U������0����������i�Mj
        int M =matrix.size(),N=matrix[0].size();//����M �k��N
        vector<int> markI(M,0),markJ(N,0);
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){//�ľ��U������i,j
                    markI[i]=1;//�аO�@�Ui�O���,���@�L���n���L0
                    markJ[j]=1;//�аO�@�Uj�O���,���@�L���n���L0
                }
            }
        }
        // ��2����,�A�y��markI�MmarkJ���аO
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j]=0;
            }//�p���аO�A�⥦������0
        }
    }
};
