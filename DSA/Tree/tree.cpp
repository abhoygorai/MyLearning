#include <bits/stdc++.h> 
using namespace std;

class tnode;
class Tree;

class tnode{
    public:
    int data;
    tnode *lchild;
    tnode *rchild;
};

class snode: public tnode{
    public:
    tnode *sdata;
    snode *next;
};

class Stack : public snode{
    public:
    snode *top = new snode;

    void push(tnode *x){
        snode *t = new snode;

        if(t == NULL)
            cout<<"Stack Overflow"<<endl;
        else{
            t->sdata = x;
            t->next = top;
            top = t;
        }
    }

    tnode *pop(){
        tnode *x = NULL;
        snode *t;
        if(top == NULL)
            cout<<"Stack is empty"<<endl;
        else{
            t = top;
            x = top->sdata;
            top = top->next;
            free(t);
        }
        return x;
    }

    int isEmpty(){
        return (top==NULL);
    }
};

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

class Tree : public Queue, public tnode{
    public:
    tnode *root = NULL;
    
    void create(){
        tnode *p = NULL;
        Queue q;
        int l, r;

        root = new tnode;
        root->rchild = NULL;
        root->lchild = NULL;
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
                tnode *i = new tnode;
                i->data = r;
                p->rchild = i;
                q.enqueue(i);
            }
            else
                p->rchild = NULL;
        }
    }

    void Preorder(tnode *p){
        if(p){
            cout<<p->data<<" ";
            Preorder(p->lchild);
            Preorder(p->rchild);
        }
    }

    void Preorder2(){
        Stack st;
        tnode *t = root;
        while(t!=NULL || !st.isEmpty()){
            if(t){
                cout<<t->data<<" ";
                st.push(t);
                t = t->lchild;
            }
            else{
                t = st.pop();
                t = t->rchild;
            }
        }
    }

    void Inorder(tnode *p){
        if(p){
            Inorder(p->lchild);
            cout<<p->data<<" ";
            Inorder(p->rchild);
        }
    }

    void Postorder(tnode *p){
        if(p){
            Postorder(p->lchild);
            Postorder(p->rchild);
            cout<<p->data<<" ";
        }
    }

    void LevelOrder(){
        Queue q;
        tnode *p = root;
        cout<<p->data;
        q.enqueue(p);
        while(!q.isEmpty()){
            p = q.dequeue();

            if(p->lchild){
                cout<<p->lchild->data;
                q.enqueue(p->lchild);
            }

            if(p->rchild){
                cout<<p->rchild->data;
                q.enqueue(p->rchild);
            }
        }
    }
};


int main(){

    Tree t;
    t.create();

    t.LevelOrder();

    return 0;
}
