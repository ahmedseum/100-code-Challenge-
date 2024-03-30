#include<iostream>
using namespace std;
struct node{
    int value;
    struct node* next;
    node(int val)
    {
        value=val;
        next=NULL;
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
    cout<<"Null";
}
void deleteFromList(node* &head,int value)
{
    node* temp=head;
    while((temp->next)->value!=value)
    {
        temp=temp->next;
    }
    if((temp->next)->value==value)
    {
        node* newtemp=temp->next;
        temp->next=newtemp->next;
    }
}
int main()
{
    struct node* head=NULL;
    insertValue(head,1);
    insertValue(head,2);
    insertValue(head,3);
    DisplayList(head);
    deleteFromList(head,2);
    DisplayList(head);
}
