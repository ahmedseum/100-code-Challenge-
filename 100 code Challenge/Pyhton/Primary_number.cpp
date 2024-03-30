#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool result = true;
    int number;
    cin>>number;
    double root=sqrt(number);
    for (int i=2;i<number;i++)
    {
        for (int j = 0;j<=root;j++)
        {
            if(i*j==number)
            {
                result=false;
            }
        }
    }
    if (result)
    {
        cout<<number<<" is prime number"<<endl;
    }else
    {
        cout<<number<<"not prime number"<<endl;
    }
}
