//Given a number N, find the Nth term in the series 1, 3, 6, 10, 15, 21…

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=n*(n+1)/2;
    cout<<k;
}