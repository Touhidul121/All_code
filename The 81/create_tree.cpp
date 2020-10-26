#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node
{
    Node* lchild;
    int data;
    Node* rchild;
};
Node* root;
void create_tree()
{
 Node *p,*t;
 int x;
 queue<Node>q;
 cout<<"Enter root value"<<endl;
 cin>>x;

 root=new Node;
 root->data=x;
 root->lchild=root->rchild=NULL;
 q.push(*root);

 while(!q.empty())
 {
     Node *p;
     p=q.pop();
     cout<<"Enter left child of "<<p->data<<endl;
cin>>x;
if(x!=-1)
  t=new Node;
t->data=x;
t->lchild=t->rchild=NULL;
p->lchild=t;
 }
 cout<<"Enter right child of "<<p->data<<endl;
 cin>>x;
 if(x!=-1)
 {
     t=new Node;
     t->data=x;
     t->lchild=t->rchild=NULL;
     p->rchild=t;
 }

}
int main()
{

}
