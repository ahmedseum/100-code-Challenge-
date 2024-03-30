#include<iostream>
using namespace std;
int limit=10;
int* queue=new int[limit];
int front=-1; 
int current=-1;


bool isEmpty()
{
    return front==-1 || front==limit;
}
bool isFull()
{
    return current==limit;
}
void Enqueue(int number)
{
    if(isEmpty() && front==-1)
    {
        front+=1;
        current+=1;
        queue[front]=number;
        cout<<"inserted"<<endl;
    }
    else if(isEmpty())
    {
        current+=1;
        queue[current]=number;
        cout<<"inserted"<<endl;
    }
    else if(isFull())
    {
        cout<<"queue is Full[Not inserted]"<<endl;
    }else
    {
        current+=1;
        queue[current]=number;
        cout<<"inserted"<<endl;
    }
}
void Dqueue()
{
    if(isEmpty())
    {
        cout<<"queue is already empty"<<endl;
    }
    else{
        cout<<"The Front value "<<queue[front]<<" has been removed"<<endl;
        front+=1;
    }
}
void Peek()
{
    if(isEmpty())
    {
        cout<<"Queue is empty "<<endl;
    }else
    {
        cout<<"Front value is :"<<queue[front]<<endl;
    }
}
void dispalyQueuq()
{
    for(int num=front ; num<limit;num++)
    {
        cout<<queue[num]<<endl;
    }
}
int main()
{
    Enqueue(10);
    Enqueue(12);
    Enqueue(9);
    Enqueue(8);
    Enqueue(3);
    Dqueue();
    Peek();
    Enqueue(33);
    Peek();
    Dqueue();
    dispalyQueuq();
}
