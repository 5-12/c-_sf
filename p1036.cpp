#include <bits\stdc++.h>
int dfs(int *,int cs);
int main(int argc, char const *argv[])
{
    int ge_shu,xuan_shu,ge_shu_shu_zu[10000];
    scanf("%d%d",&ge_shu,&xuan_shu);
    for (int i = 0; i < ge_shu; i++)
    {
        scanf("%d",&ge_shu_shu_zu[i]);
    }
    dfs(ge_shu_shu_zu,0);
    return 0;
}
int dfs(int *gszz,int cs)
{
    printf("%d",gszz[cs]);
    // dfs(gszz,cs+1);
    if (cs<=10)
    {
        dfs(gszz,cs+1);
    }
    
    return 0;
}