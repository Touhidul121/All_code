#include<bits/stdc++.h>
using namespace std;


int main() {
	int n,k,a;
	cin>>n>>k;

	vector<int>v;

	for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    int stock=0,sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        stock+=v[i];
        if(stock<8)
        {
            sum+=stock;
            count++;
            stock=0;

        }
    else
    {
        sum+=8;
        stock-=8;
        count++;

    }
        if(sum>=k){
            cout<<count<<endl;
        return 0;
    }
    }
    cout<<-1<<endl;
    }
