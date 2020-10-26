#include<bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root = NULL;


void insert(int key)
{
    struct Node *t=root;
    struct Node *r,*p;

    if(root==NULL)
    {
        p=new Node;
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
        {
            t=t->lchild;
        }
        else if(key>t->data)
            t=t->rchild;
        else
            return;
    }
    p=new Node;
    p->data=key;
    p->lchild=p->rchild=NULL;
    if(key<r->data)
        r->lchild=p;
    else
        r->rchild=p;
}

void inorder(struct Node *p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}

bool search(int key)
{
    struct Node *t=root;
    while(t!=NULL)
    {
        if(key==t->data)
            return true;
        else if(key<t->data)
            t=t->lchild;
        else
            t=t->rchild;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
    {

    cin>>ar[i];
    insert(ar[i]);
    };

    cout<<" ------Inoreder Traversal----"<<"\n";
    inorder(root);

//
//    cout<<"\nEnter value to search "<<"\n";
//    int k;
//    cin>>k;
//    if(search(k))
//        cout<<"Value Found"<<"\n";
//    else
//        cout<<"Value Not Found"<<"\n";
    return 0;


}
