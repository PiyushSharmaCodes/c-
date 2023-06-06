#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;

};
node* head; 
void Insert(int x){
    node* temp = new node();
    temp->data=x;
    temp->next=NULL;
    if (head!=NULL) temp->next=head;
    head=temp;
}
void InsertAtN(int x,int n){
    node* temp1= new node();
    temp1->data=x;
    temp1->next=NULL;
    if (n==1)
    {
       temp1->next=head;
       head=temp1;
       return;
    }
    node* temp2= head;
    for (int i = 1; i < n-1; i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    
    
}
void Print(){
    node* temp = head;
    while(temp!=NULL){
      cout<<temp->data<<" ";  
      temp=temp->next;
    }
}
int main(){
    // insertion at the beginning of linked list

head=NULL;
int n,value;
// cout<<"How many numbers you want to print";
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     cout<<"Enter the value to insert"<<endl;
//     cin>>value;
//     Insert(value);
//     Print();
//     cout<<endl;
// }

// Insert at Nth Position in Linked List⁡
InsertAtN(2,1);
InsertAtN(3,2);
InsertAtN(4,1);
InsertAtN(5,2);
Print();
// node* temp = (node*)malloc(sizeof(struct node)); // For C++ we can use node* temp = new node();
// temp->data=5;
// temp->next=NULL;
// head=temp;

// temp = new node();
// temp ->data=5;
// temp ->next=NULL;
// temp = new node();
// temp ->data=8;
// temp ->next=NULL;



return 0;
}