#include<bits/stdc++.h>
using namespace std;

vector<int>v[5000];
int main()
{
 int n,i,j;
 FILE *fp;

 fp=fopen("input5.txt","r");

 fscanf(fp,"%d",&n);

 for(int i=1;i<=2*n;i++)
 {
     int x;
     fscanf(fp,"%d",&x);
     v[x].push_back(i);
 }
 fclose(fp);

 fp=fopen("output4.txt","w");

 for(int i=1;i<=5000;i++)
 {
     if(v[i].size()%2==1)
     {
         fprintf(fp,"-1\n");
         fclose(fp);
         return 0;
     }
 }

 for(int i=1;i<=5000;i++)
 {
     for(int j=0;j<v[i].size()-1;j+=2)
     {
       fprintf(fp,"%d %d\n",v[i][j],v[i][j+1]);
     }
 }
 fclose(fp);
 return 0;
}
