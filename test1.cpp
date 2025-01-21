#include <iostream>
using namespace std;
int n,temp[1000];
int dfs(int);
int main()
{
	cin>>n;
	//cout<<n;
	dfs(0);
}
int dfs(int cs)
{
	//cout<<n;
	for(int i=1;i<=3;i++)	
	{
		if(n-i<=-1)
		{
			//cout<<i<<" "<<n<<" ";
			;//cout<<n-i<<" ";;
		}
		else if(cs==10||cs==0)
		{
			//temp[cs]=i;
			for(int i=0;i<=10;i++)cout<<temp[i]<<" ";
			cout<<endl;
		}	
		else
		{
			/*
			temp[cs]=i;
			dfs(cs+1);
			*/
			n-=i;
			temp[cs]=i;
			dfs(cs+1);
			n+=i;
		}
	}
	return 0;
 } 
