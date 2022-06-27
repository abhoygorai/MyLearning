#include<bits/stdc++.h>
using namespace std;

class tnode;

class snode: public tnode{
    public:
    tnode *sdata;
    snode *next;
};

class Stack : public snode{
    public:
    snode *top;

    void push(tnode *x){
        snode *t = new snode;

        if(t == NULL)
            cout<<"Stack Overflow"<<endl;
        else{
            t->sdata = x;
            top->next = t;
            top = t;
        }
    }

    int pop(){
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
    }
};

class tnode{

};

int main(){

    cout<<"jo";


    return 0;
}