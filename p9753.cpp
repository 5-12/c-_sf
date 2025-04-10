#ifdef _WIN32
    #include <windows.h>
#endif
#include <bits/stdc++.h>
// #include <stack>
using namespace std;
int main(void)
{
    cin.sync_with_stdio(false);
    cin.tie(nullptr);
    string input;
    input.reserve(2e9);
    int tmp=0,end3=0,dp[1000]={0};
    cin>>tmp;
    cin>>input;
    stack<char> input_end;
    for(int i=0;i<tmp;i++)
    {
        input_end=stack<char>();
        for (int j = i; j < tmp; j++)
        {
            if(!input_end.empty()&&input_end.top()==input[j])
            {
                // end3++;
                input_end.pop();
            }
            else 
            {
                input_end.push(input[j]);
            }
            if(input_end.empty())
            {
                end3++;
            }
        }
        
    }
    cout<<end3<<endl;

    
    #ifdef _WIN32
    // std::cout<<"windows";
    system("pause");
    #endif
}