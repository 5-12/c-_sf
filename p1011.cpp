#include <bits/stdc++.h>
int main(void)
{
    // int a[100],b[100],a1,n,x,y;
    int a,n,m,x,a1[1000],b[1000]={0};
    scanf("%d%d%d%d",&a,&n,&m,&x);
    a1[0]=a;a1[1]=a;
    for (int i = 2; i < x; i++)
    {
        a1[i]=a1[i-1]+a1[i-2];
        b[i]=a1[i];
        a1[i]-=b[i-1];
    }
    printf("%d",a1[x-1]);
    
    /*scanf("%d%d%d%d",&a1,&n,&x,&y);
    for (int i = 2; i <n; i++)
    {
        a[i]+=a[i-1]+a[i-2];
        a[i]-=a[i-1];
    }
    printf("%d",a[n-1]);
    */
}