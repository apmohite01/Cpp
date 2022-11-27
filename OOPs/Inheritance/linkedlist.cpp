


#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node (int data){
       this->data=data; 
       this->next=NULL;
    }
};


Node* insertAtend(Node* head , int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        
        return newnode;
        
    }    
    Node* temp=head;
    
    while(temp->next != NULL){
        
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
    
}

void printLL(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* insertAtBeg(Node* head,int data){
    Node* newnode= new Node(data);
    if(!head){
        return newnode;
    }
    newnode->next=head;
    return newnode;
}

int main()
{
    // cout<<"Hello World";
    
    Node* head= NULL;
    
     head= insertAtend(head,1);
     head= insertAtend(head,2);
     head= insertAtend(head,3);
     head=insertAtBeg(head,0);
     head=insertAtBeg(head,-1);
    printLL(head);

    return 0;
}
