#include <cstdio>
//#define endl "\n"
using namespace std;
int mx,my,bx,by;
const int dx=0,dy=9;//地图边界 
long long int rest[15][15]={1};
bool kd[10][10];
void Couts(); 
void kd_Cout();
int main()
{
	//Couts();
	for(int i=0;i<=10;i++)
	{
		rest[i][0]=1;
		rest[0][i]=1;
	}
	scanf("%d%d",&bx,&by);
	scanf("%d%d",&mx,&my);
	
	//mx--;my--;
	//bx--;by--;
	//printf("%d,%d\n",mx,my);
	//printf("%d %d\n",mx,my);
	if(mx>=dx&&my>=dx&&mx<=dy&&my<=dy)rest[mx][my]=0,kd[mx][my]=1;
	if(mx-2>=dx&&my+1>=dx&&mx-2<=dy&&my+1<=dy)rest[mx-2][my+1]=0,kd[mx-2][my+1]=1;
	if(mx-2>=dx&&my-1>=dx&&mx-2<=dy&&my-1<=dy)rest[mx-2][my-1]=0,kd[mx-2][my-1]=1;
	if(mx+2>=dx&&my-1>=dx&&mx+2<=dy&&my-1<=dy)rest[mx+2][my-1]=0,kd[mx+2][my-1]=1;
	if(mx+2>=dx&&my+1>=dx&&mx+2<=dy&&my+1<=dy)rest[mx+2][my+1]=0,kd[mx+2][my+1]=1;
	//纵向
	if(mx-1>=dx&&my+2>=dx&&mx-1<=dy&&my+2<=dy)rest[mx-1][my+2]=0,kd[mx-1][my+2]=1;
	if(mx-1>=dx&&my-2>=dx&&mx-1<=dy&&my-2<=dy)rest[mx-1][my-2]=0,kd[mx-1][my-2]=1;
	if(mx+1>=dx&&my-2>=dx&&mx+1<=dy&&my-2<=dy)rest[mx+1][my-2]=0,kd[mx+1][my-2]=1;
	if(mx+1>=dx&&my+2>=dx&&mx+1<=dy&&my+2<=dy)rest[mx+1][my+2]=0,kd[mx+1][my+2]=1;
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<10;j++)
		{
			if(!kd[i][j])
			{
				rest[i][j]=rest[i-1][j]+rest[i][j-1]; 
				//printf("%d,(%d:%d) ",rest[i][j],i,j);		
			}
		}
		//printf("\n");
	}
	printf("%lld\n",rest[bx][by]);
	//Couts();
	//printf("\n");
	//kd_Cout();
}
void Couts()
{
	for(int i=0;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			//rest[i][j]=rest[i-1][j]+rest[i][j-1]; 
			printf("%d(%d:%d) ",rest[i][j],i,j);		
		}
		printf("\n");
	}	return;
}
void kd_Cout()
{	
	for(int i=0;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			//rest[i][j]=rest[i-1][j]+rest[i][j-1]; 
			printf("%d(%d:%d) ",kd[i][j],i,j);		
		}
		printf("\n");
	}
}