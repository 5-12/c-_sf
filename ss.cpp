#include <bits/stdc++.h>
int n,t,i;
class mony
{
    public:
        double m,n;
        double end=0;
}mony[10000];
int main(void)
{
    scanf("%d%d",&n,&t);
    //std::cout<<n<<","<<t;
    for (i = 0; i < n; i++)
    {
        scanf("%d%d",&mony[i].m,&mony[i].n);
        mony[i].end=(mony[i].m/mony[i].n);
        printf("%f,%f,%f,%f\n",mony[i].m,mony[i].n,mony[i].end,mony[i].m/mony[i].n);
        //scanf("%d,%d",&mony[i].m,&mony[i].n);
        //mony[i].m=n;mony[i].n=t;
        //mony[i].end=mony[i].m/mony[i].n;
        //printf("%d",mony[i].end);
    }
}