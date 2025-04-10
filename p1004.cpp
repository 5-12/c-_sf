#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#define MAX 10
using namespace std;
int input[MAX][MAX]={0},dp[MAX][MAX][MAX][MAX];
int main(int argc, char const *argv[])
{
    int in=0,x,y;
    scanf("%d",&in);
    while(true)
    {
            scanf("%d%d",&x,&y);
            scanf("%d",&input[x][y]);
            if (input[x][y]==0&&x==0&&y==0)
            {
                break;
            }
    }
    dp[1][1][1][1]=input[1][1];
    for (int x1 = 1; x1 < in; x1++)
    {
        for (int y1 = 1; y1 < in; y1++)
        {
            for (int x2 = 1; x2 < in; x2++)
            {
                for (int y2 = 1; y2 < in; y2++)
                {
                    dp[x1][y1][x2][y2]=max({dp[x1-1][y1][x2-1][y2],dp[x1-1][y1][x2][y2-1],dp[x1][y1-1][x2][y2-1],dp[x1][y1-1][x2-1][y2]});
                }
                
            }
            
        }
        
    }
    
    return 0;
}
