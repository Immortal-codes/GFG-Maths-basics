#include<iostream>

using namespace std;

int main()
{
    int n=10;
    int count=0;

    for (int i = 0; i <=n; i++)
    {
        if (n%i==0)
        {
            if (i%3==0)
            {
                count++;
            }
            
        }
        
    }
    cout<<count;
}