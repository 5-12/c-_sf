#include <cstdio>
int endss=0;
int dfs(int *, int *, int *, int *, int *);
int main(void)
{
    int a, b, c, tmp[10000];
    scanf("%d%d%d", &a, &b, &c);
    for (int i = 123; i < 988; i++)
    {
        if (dfs(&a, &b, &c, &i, tmp))
        {
            printf("%d %d %d\n", a * i, b * i, c * i);
            endss++;
        }
    }
    if (endss==0)
    {
        printf("No!!!");
    }
    
}
int dfs(int *a, int *b, int *c, int *i, int *tmp)
{
    int End[3];
    End[0] = (*a) * (*i);
    End[1] = (*b) * (*i);
    End[2] = (*c) * (*i);
    if (End[2] >= 987)
    {
        return 0;
    }
    int trues[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int j = 0;
    // printf("%d,%d,%d\n",End[0],End[1],End[2]);
    int swaps[9];

    // printf("%f,%f,%f\n",End[0]/100,End[0]%10*0.1,End[0]%10);

    swaps[0] = End[0] / 100;
    swaps[1] = (End[0] / 10) % 10;
    swaps[2] = End[0] % 10;

    swaps[3] = End[1] / 100;
    swaps[4] = (End[1] / 10) % 10;
    swaps[5] = End[1] % 10;

    swaps[6] = End[2] / 100;
    swaps[7] = (End[2] / 10) % 10;
    swaps[8] = End[2] % 10;
    for (int i = 0; i <= 9; i++)
    {
        trues[swaps[i]]++;
    }
    for (int i = 0; i <=9; i++)
    {
        // printf("%d,",trues[i]);
        if (trues[i] >= 2)
        {
            return 0;
        }
    }

    // printf("\n");
    return 1;
}