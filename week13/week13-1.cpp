//week13-1.cpp 聖誕倒數寫程式 Advent of Code
//moodle 點擊 adventofcode.com網址 可看到黑底白字題目
//在 leetcode 的 My playground 我的遊戲場可以寫程式
//leetcode 幫你把 #include 全部都家好 不用寫#include
//右下角 stdin 可貼上你的程式 Input
//在adventofcode.com 登陸你的github 帳號後 便可看到你的專屬遊戲
//貼到右下角stdin後 在執行 看你的答案是多少(每個人都不一樣)
int main() {
    char c;//字母 對應方向 L左轉 R右轉
    int d;//數字要轉動幾格
    int now=50;//一開始的密碼鎖 指向50
    int ans=0;//轉動時 有幾次停在0的地方 (我們的通關密碼)
    while(cin>>c>>d){//一直讀資料 字母 數字
        //if(c=='L')cout<<"往左轉"<<d<<"格\n";
        //if(c=='R')cout<<"往右轉"<<d<<"格\n";
        //把上面兩行的中文註解調
        if(c=='L')now=now-d;//減掉
        if(c=='R')now=now+d;//加上

        now=(now%100+100)%100;//太大的 太小的 都限制在0-99之間
        //cout<<"現在的刻度是:"<<now<<"\n";
        if(now==0) ans++;//轉動時 停在0的地方(我們的通關密碼)
    }
    cout<<"答案是"<<ans;
}
