// LeetCode �ǲ߭p�e�GSimulation ��3�D
//1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:                  //vector�Oc++���}�C,���Y�ۦp,���O2D������g
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};//c�y�����}�C,�j�@�йL���²��
        //{}�j�A���N���l��,�̭��Ū��N��O0
        int now =1;//�{�b�����a1:���aA,2:���aB
        int winner =0;//�٨S����o�쪱�a
        for (vector<int>& move : moves){
            int i=move[0], j=move[1];//���X�y��
            a[i][j]=now;//��X�l�U�b�}�C��
            //�U����n�ˬd���S���o��
            if(now==a[i][0] && now==a[i][1] && now==a[i][2]) winner = now;//��u
            if(now==a[0][j] && now==a[1][j] && now==a[2][j]) winner = now;//���u
            if(now==a[0][0] && now==a[1][1] && now==a[2][2]) winner = now;//���W�k�U�׽u
            if(now==a[0][2] && now==a[1][1] && now==a[2][0]) winner = now;//�k�W���U�׽u
            cout << (now==a[0][2] && now==a[1][1] && now==a[2][0]) << "\n";
            cout << a[0][2] << a[1][1] << a[2][0] << "\n";
            cout << now << "\n";
            cout << "winner" << winner << "\n";
            if(now==1) now = 2;// ��H�n�洫 1��2
            else now=1;//��2��1

            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout << a[i][j] << " ";
                }
                cout << "\n";
            }
        }
        if(winner==1)return"A";
        else if(winner==2)return"B";
        else if(moves.size()==9)return "Draw";//���⪺�^��draw
        else return"Pending";
    }
};
