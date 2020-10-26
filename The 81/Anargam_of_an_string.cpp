#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>v={"geeks","keegs","code","doce"};
    vector<string>ans;
 set<string> found;
    for(int i=0;i<v.size();i++)
    {
        string word=v[i];
        sort(word.begin(),word.end());
        if(found.find(word)==found.end())
        {
         ans.push_back(v[i]);
         found.insert(word);
        }
    }

    for(auto x:ans)
        cout<<x<<" ";
}
