///week03-2a.cpp�G�X�@�n�g�⦸
///Leetcode�ǲ߭p�e��8�D1822. Sign of the Product of an Array
///��}�C���_��,�ݥ��F�������٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//�]��0������Ʀr���|��0�u����1�~�|�O�ƻ�
        for(int i=0;i<nums.size();i++){//�ݦ��X�Ӿ�j��]�X��
            ans*=nums[i];//�C����nums[i]���ians��
        }//�Ʀr�V���V�j�A1000�ӼƦr�A����@�b�N�z���F�ҥH�{�����F
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
