// LeetCode �ǲ߭p�e�GSimulation ��4�D
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions=instructions+instructions+instructions+instructions;
        cout<<instructions;
        int x=0,y=0;//x�y��,y�y��
        int d=0;//d:��Vdirection 0:�_ 1:�F 2:�n 3:��
        //�k�� d=(d+1)%4 ��4���l��
        //���� d=(d+1+4)%4 =(+3)%4 ���M�i�H½�L��,�ӯ��_�F
        int dx[4]= {0,1,0,-1};//�e�i���շ|��x +=dx[d] ��y+=dy[d]
        int dy[4]= {1,0,-1,0};
        for (char c:instructions){
            if(c=='G'){
                x +=dx[d];
                y +=dy[d];
            }else if (c=='R'){//�k��
                d=(d+1)%4;
        }else if (c=='L'){//����
                d=(d+3)%4;
        }
        }
        //cout<< 'x'<<'y'<<y<<endl;
        if(x==0 && y==0) return true;
        else return false;
    }
};
