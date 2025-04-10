#include <cstdio>
// int dfs(int *,int *,int *);
int main(void)
{
    int n=0,input_lt[20][20]={0},input_zt[20]={0},sum_now_big[20]={0},end_big=0;//联通情况，联通状态/*联通情况，联通状态*/
    scanf("%d",&n);
    int *l_j=new int[n];//输出顺序
    int max_num=0;
    for (int i = 0; i <n; i++)
    {
        // printf("%d,",i);
        scanf("%d",&input_zt[i]);
    }
    // printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j < n-i; j++)
        {
            // printf("%d ",j);
            scanf("%d",&input_lt[i][j]);
        }
        // printf("\n");
    }
    for (int i = n; i >0; i--)
    {
        // printf("%d",sum_now_big[i]);
        for (int j = n; j > i; j--)
        {
            if(input_lt[i][j]&&sum_now_big[i]<(input_zt[i]+input_zt[j]))
            {
                sum_now_big[i]=sum_now_big[j]+input_zt[i];/*dp的式子*/
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (sum_now_big[i]>end_big)
            {
                end_big=sum_now_big[i];
            }
            
        }
        
    }
    printf("%d",end_big);
    
}