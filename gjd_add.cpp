#include <bits/stdc++.h>
//using namespace std;
char input_str[10000]={'0'};
char _input_str[10000]={'0'};
int type_swap[100000][2]={0};
int output_int[100000]={0};
int temp[100]={0};
int bits=0;
int main(void)
{
    for (int i = 0; i < 10000; i++)
    {
        input_str[i]='0';
        _input_str[i]='0';
    }
    
    scanf("%s %s",&input_str,&_input_str);
    //memset(type_swap,0,sizeof(type_swap));
    temp[0]=strlen(input_str);
    temp[1]=strlen(_input_str);
    bits=temp[0]<=temp[1]?temp[1]:temp[0];
    for (int i = 0; i < bits; i++)
    {
        if((int)input_str[i]!=0) type_swap[i][1]=(int)input_str[i]-48;
        if((int)_input_str[i]!=0)type_swap[i][2]=(int)_input_str[i]-48;
        output_int[i]=type_swap[i][1]+type_swap[i][2];

        printf("%d,%d,%d\n",type_swap[i][1],type_swap[i][2],i);
    }
    for (int i = 0; i < bits; i++)
    {
        if (output_int[i]>9)
        {
            output_int[i+1]++;
            output_int[i]-=10;
        }
    }
    
    for (int i = bits; i >= 0; i--)
    {

        printf("%d",output_int[i]);
    }
    
    //printf("%d",bits);
}
