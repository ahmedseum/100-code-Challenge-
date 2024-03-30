// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void display(int *arr,int limit)
{
    for(int i =0;i<limit;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void probabilySearch(int *array,int limit,int value)
{
    int index=0;
    while( index<limit and value!=array[index])
    {
        index+=1;
    }if(index>=limit or value!=array[index])
    {
        cout<<"Not Found";
    }else {
        swap(array[index],array[index-1]);
    }
    display(array,limit);
}


int main() {
    int limit;
    cout<<"Enter Your limit : ";
    cin>>limit;
    int array[limit];
    cout<<"Enter Your Values : ";
    for(int i=0;i<limit;i++)
    {
        cin>>array[i];
    }
    int num;
    cout<<"Enter the number you Wants to search :";cin>>num;
    probabilySearch(array,limit,num);
    return 0;
}
