#include<iostream>

using namespace std;

int main()
{
    int n=4;
    int arr[]={ 56 , 67 , 30 , 79 };
    int sum=0;
    for (int i = 0; i < n; i++)
    {
       sum=sum+arr[i];
    }
    cout<<sum/4;
    
}