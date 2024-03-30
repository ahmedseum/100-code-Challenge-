#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int array[],int limit)
{
    for (int i=0;i<limit;i++)
    {
        for(int j=i+1;j<limit;j++)
        {
            if(array[i]<array[j])
            {
                swap(array[i],array[j]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<limit;i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{
    int limit;
    cout<<"Enter your limit: ";
    cin>>limit;
    int list[limit];
    cout<<"Enter the values : ";
    for (int i=0;i<limit;i++)
    {
        cin>>list[i];
    }
    bubbleSort(list,limit);
}
