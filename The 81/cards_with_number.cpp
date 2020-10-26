#include<bits/stdc++.h>
#include<fstream>

using namespace std;

vector<int>v[5000];

int main()
{
    ifstream in;
    in.open("input.txt");
    int n,a;
    in>>n;
    for(int i=1;i<=2*n;i++)
    {
        in>>a;
        v[a].push_back(i);
    }
    ofstream out;

    out.open("output.txt");

    for(int i=1;i<=5000;i++)
    {
        if(v[i].size()%2==1)
        {
            out<<"-1\n";
            return 0;
        }
    }

    for(int i=1;i<=5000;i++)
    {
        for(int j=0;j<v[i].size();j+=2)
        {
            out<<v[i][j]<<" "<<v[i][j+1]<<"\n";
        }
    }
    return 0;
}
