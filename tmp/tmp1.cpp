#include <iostream>
using namespace std;
int a,b[100],*q[100],paixu=0,big=0,d_smal=0x032ff;
int main()
{
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cin>>b[i];
        //q[i]=&b[i];
    }
    for (int i = 0; i < a; i++)
    {
        big=b[i];
        
        for (int j = i; j < a; j++)
        {
            if (big<b[j]&&big<d_smal)
            {
                big=b[j];
                q[paixu]=&b[j];
                cout<<i<<":"<<j<<":"<<big<<":"<<paixu<<":"<<*q[paixu]<<endl;
            }
            
        }
        d_smal=*q[paixu];
        paixu++;
    }
    cout<<"ther";
    for (int i = 0; i < a; i++)
    {
        cout<<*q[i]<<" ";
    }
};