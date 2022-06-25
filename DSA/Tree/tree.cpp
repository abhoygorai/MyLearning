#include <bits/stdc++.h> 
using namespace std;

class tnode;
class Tree;

class qnode{
    public:
    tnode *q_data;
    qnode *next;
};

class Queue : public qnode{
    public:
    qnode *front = NULL;
    qnode *rear = NULL;

    void enqueue(tnode *x){
        qnode *t = new qnode;

        if(t == NULL){
            cout<<"Queue is full"<<endl;
        }
        else{
            t->q_data = x;
            t->next = NULL;

            if(front == NULL){
                front = t;
                rear = t;
            }
            else{
                rear->next = t;
                rear = t;
            }
        }
    }

    tnode *dequeue(){
        tnode *x = NULL;
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
        }
        else{
            x = front->q_data;
            front = front->next;
        }
        return x;
    }

    void Display(){
        qnode *n;
        n = front;
        while(n){
            cout<<n->q_data<<endl;
            n = n->next;
        }
    }

    int isEmpty(){
        if(front == NULL)
            return 1;
        else 
        return 0;
    }
};

class tnode{
        public:
        int data;
        tnode *lchild;
        tnode *rchild;
    };

class Tree : public Queue, public tnode{
    public:
    tnode *root = NULL;
    
    void create(){
        tnode *p = NULL;
        Queue q;
        int l, r;

        root = new tnode;
        root->rchild = root->lchild = NULL;
        q.enqueue(root);

        cout<<"Enter the root value: ";
        cin>>root->data;

        while(!q.isEmpty()){
            p = q.dequeue();

            cout<<"Enter left child: ";
            cin>>l;

            if(l != -1){
                tnode *t = new tnode;
                t->data = l;
                p->lchild = t;
                q.enqueue(t);
            }
            else
                p->lchild = NULL;

            cout<<"Enter the right child: ";
            cin>>r;

            if(r != -1){
                tnode *t = new tnode;
                t->data = r;
                p->rchild = t;
                q.enqueue(t);
            }
            else
                p->rchild = NULL;
        }
        // q.Display();
    }

    void Preorder(tnode *p){
        if(p){
            cout<<p->data<<" ";
            Preorder(p->lchild);
            Preorder(p->rchild);
        }
    }
};


int main(){


    cout<<"hello"<<endl;

    Tree t;
    t.create();

    t.Preorder(t.root);


    return 0;
}