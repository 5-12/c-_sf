#include <iostream>
#define endl "\n"
using namespace std;
int End[100];
int Endss[10000][100];
int n=0,bccs=0;//保存当前已用信息 
int dfs(int); 
int main()
{
	cin>>n;
	if(n>30) cout<<"-1"<<endl;
	dfs(0);	
	cout<<bccs<<endl;
	for(int i=0;i<bccs;++i)
	{
		for(int j=0;j<10;++j)
		{
			cout<<Endss[i][j]<<" "; 
		}
		cout<<endl;
	}
	int a;
cin>>a;
} 
int dfs(int cs)
{
	if(cs<=9)
	{
		for(int i=1;i<=3;++i)
		{
			End[cs]=i;
				n-=i;
				dfs(cs+1);
				n+=i;
		}
	}	
	else if(n==0)
	{
		for(int i=0;i<cs;i++)
		{
			Endss[bccs][i]=End[i];	
		}
		bccs+=1;//标记当前已经用过 
			//cout<<endl;
			//break;
		}
	return 0;
}
