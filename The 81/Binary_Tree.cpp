#include<bits/stdc++.h>
using namespace std;
struct Node
{
int data;
struct node *left;
struct node *right;
};
struct Queue
{
    int size1;
    int front1;
    int rear;
    struct Queue **Q;
};

void create(struct Queue *q,int size1)
{
    q->size1=size1;
    q->front1=q->rear=-1;
    q->Q=(Node**)malloc(q->size1*sizeof(Node*));

}

void enqueue(struct Queue *q,Node* x)
{
    if(q->rear==q->size1-1)
        cout<<"Queue is Full";
    else
    {
        q->rear=(q->rear+1)%q->size1;
        q->Q[q->rear]=x;
    }
}

Node* dequeue(struct Queue *q)
{
 Node* x=NULL;
 if(q->front1==q->rear)
        cout<<"Queue is Empty\n";
 else
 {
   q->front1=(q->front1+1)%q->size1;
   x=q->Q[q->front1];
 }
 return x;
}
int isempty(struct Queue q)
{
    return q.front1==q.rear;
}
struct node *new_node(int num)
{
node *temp=new node();
temp->left=NULL;
temp->right=NULL;
temp->data=num;
return temp;
}
void inorder(node *root)
{
if(root==NULL)
return ;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
void getParent(node *root,int parent,node **temp)
{
if(root==NULL)
return ;
if(root->data==parent)
(*temp)=root;
getParent(root->left,parent,temp);
getParent(root->right,parent,temp);

}
node *getNode(node *root,int parent,int child,char ch)
{
node *temp=NULL;
getParent(root,parent,&temp);
if(ch=='R')
temp->right=new_node(child);
else
temp->left=new_node(child);
return root;
}
void levelOrder(struct Node *root)
{
  struct  Queue q;
  create(&q,100);

  cout<<root->data<<" ";
  enqueue(&q,root);

  while(!isempty(q))
  {
      root=dequeue(&q);
      if(root->lchild)
      {
          cout<<root->lchild->data<<" ";
          enqueue(&q,root->lchild);
      }
      if(root->rchild)
      {
          cout<<root->rchild->data<<" ";
          enqueue(&q,root->rchild);
      }
  }
}
int main()
{
node *root=NULL;
root=new_node(1);
int n,k;
cin>>n;
for(int i=0;i<n-1;i++)
{
int a,b;
char ch;
cin>>a>>b>>ch;
root=getNode(root,a,b,ch);
}
inorder(root);
return 0;
}

