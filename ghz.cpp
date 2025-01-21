#include <cstdio>
//#define endl "\n"
using namespace std;

long long int rest[10][10]={1};
bool kd[10][10];
void Couts(); 
int main()
{
	Couts();
	for(int i=0;i<=9;i++)
	{
		rest[i][0]=1;
		rest[0][i]=1;
	}
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			
			rest[i][j]=rest[i-1][j]+rest[i][j-1]; 
			rest[0][0]=1;
			printf("%d,(%d:%d) ",rest[i][j],i,j);		
		}
		printf("\n");
	}
	Couts();
}
void Couts()
{
	for(int i=0;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			//rest[i][j]=rest[i-1][j]+rest[i][j-1]; 
			printf("%d ",rest[i][j]);		
		}
		printf("\n");
	}	return;
}
