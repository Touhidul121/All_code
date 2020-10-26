#include<bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue{
int size;
int front;
int rear;
struct Node **Q;
};

void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q=(Node **)malloc(q->size*sizeof(Node*));
}
void enqueue(struct Queue *q,Node *x)
{
    if((q->rear+1)%q->size==q->front)
        cout<<"Queue is Full"<<"\n";
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
struct Node* dequeue(struct Queue *q)
{
    struct Node *x=NULL;
    if(q->front==q->rear)
        cout<<"Queue is Empty"<<"\n";
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
};
bool isEmpty(struct Queue q)
{
    return q.front==q.rear;
}
struct Node *root=NULL;
void Treecreate()
{
    struct Node *p,*t;
    struct Queue q;
    create(&q,100);
    int x;
    cout<<"Enter the value of root = ";
    cin>>x;
    root=(struct Node*)malloc(sizeof(struct Node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);
    while(!isEmpty(q))
    {
        p=dequeue(&q);
        cout<<"Enter left child of "<<p->data<<"\n";
        cin>>x;
        if(x!=-1)
        {
            t=(struct Node*)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
        cout<<"Enter right child of "<<p->data<<"\n";
        cin>>x;
        if(x!=-1)
        {
            t=(struct Node*)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
}
void preorder(struct Node *p)
{
    if(p){
    cout<<p->data<<" ";
    preorder(p->lchild);
    preorder(p->rchild);
    }
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
int main()
{
    Treecreate();
    preorder(root);
    cout<<"\n";
    inorder(root);
    return 0;
}
