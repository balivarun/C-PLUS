#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // costructor 
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class linked_list{
    public:
    node* head;

    linked_list(){
        head=NULL;
    }

    void insertathead(int data){
        // creating a new node;
        node* temp=new node(data);
        temp->next=head;
        head=temp;
    }

    void inseratend(int data){
        node* temp=new node(data);
        if(head==NULL){
            insertathead(data);
            return;
        }
        else{

        }
    }










    void print(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }



    
};




int main(){
    // created a new node
    // node* n_node=new node(10);
    // cout<<n_node->data<<endl;
    // cout<<n_node->next<<endl;
    //head pointe to n_node
    // node* head=n_ode;
    
    linked_list a;
    a.insertathead(24);
    a.insertathead(56);
    a.insertathead(67);
    a.print();
    a.insertathead(45);
    a.print();

    return 0;
}