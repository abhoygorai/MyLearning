#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *lchild;
    Node *rchild; 
};

class BTree : public Node{
    public:
    Node *root = NULL;
    Node *p = NULL, *r = NULL;
    void Insert(int key){

        if(root == NULL){
            p = new Node;
            p->data = key;
            p->lchild = NULL;
            p->rchild = NULL;
            root = p;
            return;
        }
        
        Node *t = root;
        while(t!=NULL){
            r = t;
            if(t->data == key)
                return;
            else if(key < t->data)
                t = t->lchild;
            else
                t = t->rchild;
        }

        p = new Node;
        p->data = key;
        p->lchild = p->rchild = NULL; 

        if(key<r->data)
            r->lchild = p;
        else
            r->rchild = p;
    }

    int Height(Node *p){
        if(p == NULL){
            return 0;
        }
        int lheight = Height(p->lchild);
        int rheight = Height(p->rchild);

        return (max(lheight, rheight)+1);
    }

    void Inorder(Node *p){
        if(p){
            Inorder(p->lchild);
            cout<<p->data<<" ";
            Inorder(p->rchild);
        }
    }

    Node *InPre(Node *p){
        while(p && p->rchild != NULL)
            p = p->rchild;
        
        return p;
    }

    Node *InSucc(Node *p){
        while(p && p->lchild != NULL)
            p = p->lchild;
        
        return p;
    }

    Node *Delete(Node *p, int key){

        Node *q;
        if(p == NULL)
            return NULL;
        if(p->lchild == NULL && p->rchild == NULL){
            if(p == root)
                root = NULL;
            free(p);
            return NULL;
        }

        if(key<p->data)
            p->lchild = Delete(p->lchild, key);
        else if(key>p->data)
            p->rchild = Delete(p->rchild, key);
        else{

            if(Height(p->lchild) > Height(p->rchild)){
                q = InPre(p->lchild);
                p->data = q->data;
                p->lchild = Delete(p->lchild, q->data);
            }
            else{
                q = InSucc(p->rchild);
                p->data = q->data;
                p->rchild = Delete(p->rchild, q->data);
            }
        }
        return p;
    }
};

int main(){

    BTree t;
    t.Insert(20);
    t.Insert(10);
    t.Insert(1);
    t.Insert(30);
    t.Insert(5);

    t.Inorder(t.root);
    cout<<endl;

    t.Delete(t.root, 1);
    
    t.Inorder(t.root);
    cout<<endl;

    return 0;
}