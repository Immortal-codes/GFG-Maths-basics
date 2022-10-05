#include<iostream>

using namespace std;

//nPr is (n!) / (n-r)!.


int main()
{
    int n=2;
    int r=1;
    int fact;
    int k=n-r;
    for (int i = 0; i<=n; i++)
    {
       n--;
       k--;

       fact=n/k;
       
        
    }
    cout<<fact;
}