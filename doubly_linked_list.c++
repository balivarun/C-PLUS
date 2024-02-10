/*linked is the collection of nodes
node is the combination of data and the addresss of next data 
 advantages of linked list:
 dynamic data structure is linked list
 no shift is required


*/

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

class dlinkedlist{
    public:
    node* head;

    dlinkedlist(){
        head=NULL;
    }

    void insertatend(int data){
        node* n_node=new node(data);
        if(head==NULL){
            head=n_node;
            return;
            
        }
        else{
            node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=n_node;
            n_node->prev=temp;
        }
    }

    void insertathead(int data){
        node* n_node=new node(data);
            if(head==NULL){
                head=n_node;
            }
            else{
                head->prev=n_node;
                n_node->next=head;
                head=n_node;
            }
        } 

        void print(){
            node *temp=head;
            while(temp!=NULL){
                cout<<temp->data<< " ";
                temp=temp->next;
            }
        }

        void atposition(int position,int data){
            if(position==1){
                insertathead(data);
                return;
            }
            int count=1;
            node* temp=head;
            while(count<position-1){
                temp=temp->next;
                count++;
            }
            if(temp->next==NULL){
                insertatend(data);
                return;
            }
            node *n_node=new node(data);
            n_node->prev=temp;
            n_node->next=temp->next;
            temp->next=n_node;
            n_node->next->prev=n_node;
        
        }

        void todelete(int position){
            if(position==1){

            }
        }





};


int main(){
    dlinkedlist a;

    a.insertatend(20);
    a.insertatend(30);
    a.insertathead(300);
    a.atposition(2,45);
    a.atposition(3,23);

    a.print();
    

return 0;
}
