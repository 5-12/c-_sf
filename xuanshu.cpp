#include <cstdio>
using namespace std;
int Nums[11];
bool Tr;
int End[4],End_Temp[4],a,b,c;
bool Cout_for_End(void);
int main()
{
	//scanf("%d%d%d",&a,&b,&c);
	a=1,b=2,c=3;
	for(int i=123;i<=987;i++)
	{
		End[1]=a*i;End[2]=b*i;End[3]=c*i;
		if(End[3]>=987)
		{
			break;
		}
		Cout_for_End();
		for(int j=0;j<=9;j++)
		{
			if(Nums[j]<=1&&Nums[0]==0&&Tr!=0) Tr=1;
			else Tr=0;
		}
		printf("%d\n",Tr);
		if(Tr)printf("%d,%d,%d\n",a*i,b*i,c*i);
		Tr=1;
		for(int i=0;i<=11;i++)Nums[i]=0; 
		//printf("\n"); 

		
		
	}
}
bool Cout_for_End()
{
	//printf("try");
	for(int i=1;i<=3;i++)
	{
		End_Temp[1]=End[i]/100;End_Temp[2]=End[i]/10%10;End_Temp[3]=End[i]%10;
		
		for (int j=1;j<=3;j++)
		{
			printf("%d,",End_Temp[j]);
			Nums[End_Temp[j]]++;
		}
		printf("\n");
		for(int i=0;i<=9;i++)printf("%d:%d,",i,Nums[i]);
		printf("\n");
	}
	return 1;
	//printf("\n");
	
}

