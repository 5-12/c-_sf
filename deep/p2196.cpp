#include <cstdio>
int main(void)
{
    int n=0,*input_dl,input_lt[100][100],*dp,max=0;
    scanf("%d",&n);   
    input_dl=new int[n];dp=new int[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&input_dl[i]);
        dp[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            scanf("%d",&input_lt[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        dp[i]=input_dl[i];
        for (int j = 0; j < i; j++)
        {
            //先推断最大值,记录最大值在最大值正确之后
            if(input_lt[i][j]&&dp[i]<input_dl[i]+dp[i])
            {
                dp[i]=dp[j]+input_dl[i];
            }
        }
        
    }
    
    delete []input_dl;
    delete []dp;

}