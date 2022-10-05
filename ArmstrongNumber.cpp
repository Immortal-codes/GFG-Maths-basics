#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n=370;

    int s=0;
    while(n>0)
    {
        s=s+pow(n%10,3);
        n=n/10;
    }
    if(s==n)
    {
        cout<<"yes";

    }
    else
    {
        cout<<"No";
    }
    
}