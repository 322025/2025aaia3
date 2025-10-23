// LeetCode 學習計畫：Simulation 第4題
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions=instructions+instructions+instructions+instructions;
        cout<<instructions;
        int x=0,y=0;//x座標,y座標
        int d=0;//d:方向direction 0:北 1:東 2:南 3:西
        //右轉 d=(d+1)%4 取4的餘數
        //左轉 d=(d+1+4)%4 =(+3)%4 竟然可以翻過來,太神奇了
        int dx[4]= {0,1,0,-1};//前進藝閣會走x +=dx[d] 及y+=dy[d]
        int dy[4]= {1,0,-1,0};
        for (char c:instructions){
            if(c=='G'){
                x +=dx[d];
                y +=dy[d];
            }else if (c=='R'){//右轉
                d=(d+1)%4;
        }else if (c=='L'){//左轉
                d=(d+3)%4;
        }
        }
        //cout<< 'x'<<'y'<<y<<endl;
        if(x==0 && y==0) return true;
        else return false;
    }
};
