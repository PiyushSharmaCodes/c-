#include<iostream>
using namespace std;
struct node
{
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
    
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    
    
}

int main(){
    head=NULL;
int n,value,position;
cout<<"Enter Number of Nodes";
cin>>n;
for (int i = 0; i < n; i++)
{
    cout<<"Give Value ";
    cin>>value;
    cout<<"Give Position ";
    cin>>position;
    insertion(value,position);
    Print();
}


return 0;
}