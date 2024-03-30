#include<iostream>
using namespace std;
struct node{
    int value;
    struct node* next;
    struct node* pre;
    node(int val)
    {
        value=val;
        next=NULL;
        pre=NULL;
    }
};
void insertValue(node* &head, int val)
{
    node* newNode=new node(val);
    node* temp=head;
    if(head==NULL)
    {
        head=newNode;
    }else{
        while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->pre=temp;
    }
}
void DisplayList(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteFromList(node* &head,int value)
{
    node* temp=head;
    if(temp->value==value)
    {
        temp->next->pre=NULL;
        head=temp->next;
        
    }
    else{
        while((temp->next)->value!=value)
            {
                temp=temp->next;
                cout<<"counting"<<endl;
            }
            if((temp->next)->value==value &&temp->next->next!=NULL)
            {
                node* newtemp=temp->next;
                temp->next=newtemp->next;
                newtemp->next->pre=temp;
            }else if(temp->next->next==NULL)
            {
                temp->next=NULL;
            }
    }
    
}
void reversePrint(node* &head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        cout<<temp->value<<"->";
         temp=temp->pre;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    struct node* head=NULL;
    insertValue(head,1);
    insertValue(head,2);
    insertValue(head,3);
    DisplayList(head);
    deleteFromList(head,1);
    DisplayList(head);
    reversePrint(head);
}
