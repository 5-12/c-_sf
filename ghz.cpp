#include <bits/stdc++.h>
using namespace std;
int mx,my,bx,by,i,j;
long long int outcome[15][15];
bool E_try[15][15];
const int Begin_bj=0,End_bj=12;
void O_T_out();
int main()
{
	cin>>mx>>my;
	mx++;my++;
	for(i=1;i<=mx;i++)outcome[i][2]=1;
	for(i=1;i<=my;i++)outcome[2][i]=1;
	for(i=2;i<=mx;i++)
	{
		for(j=2;j<=my;j++)
		{
			outcome[i][j]=outcome[i-1][j]+outcome[i][j-1];
			//printf("%d ",outcome[i][j]);
		}
		//cout<<endl;
	}
	O_T_out();
}
void O_T_out()
{
	for(i=2;i<=mx;i++)
	{
		for(j=2;j<=my;j++)
		{
			//outcome[i][j]=outcome[i-1][j]+outcome[i][j-1];
			printf("%d ",outcome[i][j]);
		}
		cout<<endl;
	}	
}
