#include <bits\stdc++.h>
int n,t;
float m[10000],v[100000];
float big_bits[100000];
// float 
int main(void)
{
    scanf("%d%d",&n,&t);
    for (int i = 0; i < n; i++)
    {
        scanf("%f%f",&m[i],&v[i]);
        big_bits[i]=m[i]/v[i];
        // printf("%d,%d\n",m[i],v[i]);
        // std::cout<<m[i]<<':'<<v[i]<<std::endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            float tmp=big_bits[i];
            int tmps;
            if (big_bits[i]<big_bits[j])
            {
                tmp=big_bits[j];big_bits[j]=big_bits[i];big_bits[i]=tmp;
                tmps=m[i];m[i]=m[j];m[j]=tmps;
                tmps=v[i];v[i]=v[j];v[j]=tmps;
            }
        }
        
    }
    // printf
    for (int i = n; i > 0; i++)
    {
        printf("%f,%f,%f ",big_bits[i],m[i],v[i]);
        /*
        if (t==0)
        {
            break;
        }
        t-=m[i];
        if (t>0)
        {
            goto rest;
        }*/
        // printf("%d,%d")
    }
    int tmp=n-1;
    

}