///week08-4.cpp
///�Ʀr�¬}�d���C�J�`��6174(�j��p-�p��j����7��
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"�Х��N��J4���(�����P):";///ex.1234 1 2 3 4
    int n;
    cin>>n;
    for(int i=0;i<7;i++){///�C�������w����°�6174
    vector<int> a;
    while(n>0){///��֪k ��|��Ƴv�@�ޥX��
        a.push_back(n%10);///��o����}�C�̭�
        n=n/10;///�駹�ִN�G�F

    }
    sort(a.begin(),a.end());
    int M=a[3]*1000+a[2]*100+a[1]*10+a[0];
    int m=a[0]*1000+a[1]*100+a[2]*10+a[3];
    ///M�O�ƻ�m�O�ƻ�
    n=M-m;
    cout << M<<"�"<<m<<"�o��"<<n<<endl;
    }
}
