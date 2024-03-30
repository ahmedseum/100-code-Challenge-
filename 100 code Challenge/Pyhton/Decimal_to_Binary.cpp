#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin>>number;
    int binaryNumber[100];
    int i=0;
    while(number!=0)
    {
        binaryNumber[i]=number%2;
        i++;
        number=number/2;
    }
    sort(binaryNumber,binaryNumber+1+i,greater<int>());
    for(int k=0;k<i;k++)
    {
        cout<<binaryNumber[k];
    }
}
