#include <bits/stdc++.h>
using namespace std;
class test
{
    public:
        int pa;
        int son;
    bool u=false;
}test1[100000];
void adds(test*,const int );
int main(void)
{
    int a,son;
    cin>>a;//测试数据数量
    for (int i = 0; i < a; i++)
    {
        cin>>son;
        adds(test1,son);
    }
    cout<<"ok\n";
    for (int q = 0; q < a; q++)
    {
        if(test1[q].u==false)
        {
            break;
        }
        else
        
            cout<<test1[q].pa<<":"<<test1[q].son<<endl;
        
    }
    
    
}
void adds(test *add_pa,const int add)
{
    if (add_pa->u==true)
    {
        adds(add_pa+1,add);
    }
    else
    {
        add_pa->pa=add;
        add_pa->son=add;
        add_pa->u=true;
        return;
    }
    
    
}
