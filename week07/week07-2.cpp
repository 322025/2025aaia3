///week07-2.cpp���e�P�P�@��
///�e�X�W�j�������,�Ʀr�]�_��
///TAICA��j��¦�{���]�p(c++)�������D ��6�D
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;///Part 1:Input
    cin>>n;

    for(int i=1;i<n*2;i++){///Part2 :output
        for(int j=1;j<n*2;j++){
            ///�L�X�ӫ�,�o�{�����ߪ�1�ܦ��N��
            int d=max(abs(i-n),abs(j-n));
            cout<<d+1;///cout<<n;
        }
        cout<<endl;///cout<<"�{�b1�O:"<<i<<endl:///�ӫ�������
    }
}///2�|��3����,3�|��5����,4�|��7����,5�|��9����,
