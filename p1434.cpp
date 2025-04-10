#include <cstdio>
#include <cstring>
int main(void)
{
    int r=0,c=0;
    scanf("%d%d",&r,&c);
    int **input_now,**dp;
    input_now=new int* [r];dp=new int *[r];
    for (int i = 0; i < r; i++)
    {
        dp[i]=new int[c];
        input_now[i]=new int[c];
    }
    //初始化
    // memset(dp,0,sizeof(dp));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&input_now[i][j]);
            dp[i][j]=input_now[i][j];
        }
    }
    //赋值
    //to-do:计算
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (i>0)
            {
                
            }
            
        }
        
    }
    
    
}