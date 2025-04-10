#include <bits/stdc++.h>
bool jmp_while=0;
int tmp=0,tmp3=0;
char input_cache[100000000];
int end_for_11[100][1];
int end_for_21[100][1];
int game_end=0;
// int game_end[10000][10000][2];
int w=0,l=0;
int main(void)
{

    while (!jmp_while)
    {
        input_cache[tmp]=getchar();
        if(input_cache[tmp]=='E')
        {
            jmp_while=1;
        }
        tmp++;
    }
    tmp=0;
    while (jmp_while)
    // 11判断
    {
        
        if (input_cache[tmp]=='W')
        {
            end_for_11[game_end][0]++;
        }
        else if (input_cache[tmp]=='L')
        {
            // std::cout<<'L';
            end_for_11[game_end][1]++;
        }
        else
        {
            break;
        }
        // printf("%d,%d\n",game_end);
        /*tmp3=end_for_11[game_end][0]+end_for_11[game_end][1];
        if (tmp3==11)
        {
            game_end+=1;
        }*/
        tmp++;
        
    }
    
    for(int i=0;i<11;i++) printf("%d:%d,",end_for_11[i][0],end_for_11[i][1]);//,end_for_11[i][1]);

}