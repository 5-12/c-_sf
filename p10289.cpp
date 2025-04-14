#include <bits/stdc++.h>
#ifdef _WIN32
    #include <windows.h>
#endif
using namespace std;
int n,k,q;
int n1[10000][10000],k1[10000][10000],q1[10000];
int tmp,tmp1;
int main(void)
{
    cin.sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>k>>q;
    for (int i = 0; i < n-1; i++)
    {
        cin>>tmp>>tmp1;

        // n1.push_back(tmp);
    }
    for(int i=0;i<k;i++)
    {
        cin>>tmp>>tmp1;
        // k1.push_back(tmp);
    }
    for (int i = 0; i < q; i++)
    {
        cin>>tmp>>tmp1;
        // q1.push_back(tmp);
    }
}