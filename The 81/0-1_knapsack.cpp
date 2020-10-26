#include<bits/stdc++.h>
using namespace std;

int main()
{
    int items,knapsack_weight;
    cin>>items>>knapsack_weight;

    int weight[items+1],values[items+1],track[knapsack_weight+1];
    memset(track,0,sizeof(track));

    for(int i=1;i<=items;i++)
        cin>>weight[i];

    for(int i=1;i<=items;i++)
        cin>>values[i];

    int profit[items+1][knapsack_weight+1];
    for(int i=0;i<=items;i++)
        profit[i][0]=0;

    for(int i=0;i<=knapsack_weight;i++)
        profit[0][i]=0;

    for(int i=1;i<=items;i++)
    {
        for(int j=1;j<=knapsack_weight;j++)
        {
            if(weight[i]>j)
            {
              profit[i][j]=profit[i-1][j];
            }
            else
            {

                if(profit[i-1][j]>=profit[i-1][j-weight[i]]+values[i])
                    profit[i][j]=profit[i-1][j];
                else
                {
                    profit[i][j]=profit[i-1][j-weight[i]]+values[i];
                    track[profit[i][j]]=i;
                }
            }
        }
    }

    int i=profit[items][knapsack_weight];
    int j=track[i];
    stack<pair<int,int>>stk;
    while(j!=0)
    {
     stk.push({j,values[j]});
     i=i-values[j];

     j=track[i];
    }

    while(!stk.empty())
    {
        cout<<stk.top().first<<"---> "<<stk.top().second<<"\n";
        stk.pop();
    }
    cout<<"Optimal solution = "<<profit[items][knapsack_weight]<<"\n";
}
