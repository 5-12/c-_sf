#include <iostream>
using namespace std;
void Couts();
int kf[10][10];
int main()
{
	for(int i=0;i<=9;i++)
	{
		kf[i][0]=1;
		kf[0][i]=1;
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
			printf("%d ",kf[i][j]);		
		}
		printf("\n");
	}	return;
}
