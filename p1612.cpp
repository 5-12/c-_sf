#include <cstdio>/*答案用中文输出*/
#include <bits\stdc++.h>
int main(void)
{
    int n;
    int input[1000][1000]={0},bit_x=0,bit_y=0;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            scanf("%d",&input[i][j]);
            // bit_x=j;
        }   
        // bit_y=i;
    }
    for (int i = n-2; i >=0; i--)
    {
        for (int j = 0; j <=i ; j++)
        {
            input[i][j]+=input[i+1][j]>input[i+1][j+1]?input[i+1][j]:input[i+1][j+1];
            // input[i][j]=std::max();
            // printf("%d",input[i][j]);
        }
        // printf("\n");
    }
    printf("%d",input[0][0]);
    /*
    
    输入：3 1 1 2 1 2 3
    输出:
    3
    预期:
    最大路径
    */
}
void print_input()/*忽略这里*/
{
    int n,input[0][0];//记得删掉
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j <=i ; j++)
        {
            printf("%d",input[i][j]);
        }
        printf("\n");
    }
}
