#include <iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

void unionset(set<int> set1,set<int> set2)
{
    set <int> unionSet=set1;
    unionSet.insert(set2.begin(),set2.end());
    for(int num : unionSet)
    {
        cout<<num<<" ";
    }
}
void intersectionset(set<int> set1,set<int> set2)
{
    set <int> intersectionSet;
    for(int i :set1)
    {
        for(int j : set2)
        {
            if(i==j)
            {
                intersectionSet.insert(i);
            }
        }
    }
    for(int num : intersectionSet)
    {
        cout<<num<<" ";
    }
}

int main() {
    set <int> set1;
    set <int> set2;
    cout<<"Enter set 1 limt"<<endl;
    int limit1;
    cin>>limit1;
    cout<<"Enter Set 1 Value :";
    for (int i =0;i<limit1;i++)
    {
        int num;
        cin>>num;
        set1.insert(num);
    }

    cout<<"Enter set 2 limt"<<endl;
    int limit2;
    cin>>limit2;
    cout<<"Enter Set 2 Value :";
    for (int i =0;i<limit2;i++)
    {
        int num;
        cin>>num;
        set2.insert(num);
    }
    unionset(set1,set2);
    intersectionset(set1,set2);

    return 0;
}
