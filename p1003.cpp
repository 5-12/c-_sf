#include <bits/stdc++.h>
#define bits 100000
int n=0,x[bits],y[bits],leng[bits],width[bits],for_nubmer=0,x1=0,y01=0;
int main(void)
{
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d",&x[i],&y[i],&leng[i],&width[i]);
        for_nubmer++;
    }
    scanf("%d%d",&x1,&y01);
    for (int i = for_nubmer-1; i >=0; i--)
    {
        if (((x1>=x[i])&&(x1<=leng[i]))&&((y01>=y[i])&&(y01<=width[i])))
        {
            printf("%d",i+1);
            return 0;
        }
        
    }
    printf("-1");

}