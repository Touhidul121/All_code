#include<bits/stdc++.h>
using namespace std;

struct trie
{
    struct trie* child[26];
    bool isend;
    int count;

    trie()
    {
        memset(child,0,sizeof(child)); // 0 means NULL
        isend=false;
        count=0;

    }
};
struct trie *root;

void insert(string str)
{
   struct trie *cur=root;

   for(char ch:str)
   {
       int idx=ch-'a';
       if(cur->child[idx]==NULL)
       {
           cur->child[idx]=new trie;
       }
       cur->child[idx]->count++;
       cur=cur->child[idx];
   }
   cur->isend=true;
}

int pref(string str)
{
    struct trie *cur=root;

    for(char ch:str)
    {
        int idx=ch-'a';
        if(cur->child[idx]==NULL)
            return 0;
        cur=cur->child[idx];
    }
    return cur->count;
}
int main()
{
    root=new trie;
    int n;
    cin>>n;

    while(n--)
    {
        string str;
        cin>>str;
        insert(str);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<pref(s)<<"\n";
    }
}
