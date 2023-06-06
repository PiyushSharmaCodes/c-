#include<iostream>
using namespace std;

struct node{
    int data;
    node* link;
};
node* head;
void insertion(int value,int position){
    
    node* temp = new node();
    temp->data=value;
    temp->link=NULL;
    if (position==1)
    {
        if (head!=NULL)temp->link=head;
        head=temp;
        return;
    }
    node* traverse=head;
    for (int  i = 1; i < position-1; i++)
    {
        traverse=traverse->link;
    }
    temp->link=traverse->link;
    traverse->link=temp;
}
void Print(){
    node* temp=head;
    if (head==NULL)
    {
        cout<<"Linked List is Empty";
        return;
    }
    
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    
    
}
void deletion(int position){
    node * traverse = new node();
    node * temp = new node();
    traverse=head;
    if(position==1){
        head=head->link;
        free(traverse);
        return;
    }
    for (int  i = 1; i < position-1; i++)
    {
        traverse=traverse->link;
    }
    temp = traverse->link;
    traverse->link=temp->link;
    free(temp);
}
int main(){
    head=NULL;
int m,n,value,position;
cout<<"Enter Number of Nodes";
cin>>n;
for (int i = 0; i < n; i++)
{
    cout<<"Give Value ";
    cin>>value;
    cout<<"Give Position ";
    cin>>position;
    if (position>n)
    {
        cout<<"Invalid Position";
        return 0;
    }
    insertion(value,position);
    Print();
}
cout<<"How many nodes you want to delete ";
cin>>m;
for (int i = 0; i < m; i++)
{
    cout<<"Give Position ";
    cin>>position;
    deletion(position);
    Print();
}


return 0;
}